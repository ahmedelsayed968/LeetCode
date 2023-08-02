/* Write your T-SQL query statement below */

WITH Buy AS (
    SELECT stock_name, 
        SUM(CASE WHEN operation = 'Buy' THEN price ELSE 0 END) AS price_buy
    FROM Stocks
    GROUP BY stock_name
    HAVING SUM(CASE WHEN operation = 'Buy' THEN price ELSE 0 END) IS NOT NULL
	),
	Sell AS (
		SELECT stock_name, 
        SUM(CASE WHEN operation = 'Sell' THEN price ELSE 0 END) AS price_sell
    FROM Stocks
    GROUP BY stock_name
    HAVING SUM(CASE WHEN operation = 'Sell' THEN price ELSE 0 END) IS NOT NULL
	)

SELECT b.stock_name, (s.price_sell - b.price_buy) AS capital_gain_loss
FROM Buy AS b
INNER JOIN Sell AS s ON b.stock_name = s.stock_name;