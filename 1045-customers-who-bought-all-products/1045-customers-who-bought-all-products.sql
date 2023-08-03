/* Write your T-SQL query statement below */

with filtered AS (
	SELECT DISTINCT * FROM Customer
) 
	,count_products AS (
	SELECT count(product_key) AS count_product FROM Product
	),
	groubed_cutomers AS( 
		SELECT customer_id,COUNT(product_key) AS count_bought
		FROM filtered
		GROUP BY customer_id
	)

SELECT c.customer_id
FROM groubed_cutomers AS c
INNER JOIN count_products AS cp ON c.count_bought = cp.count_product;