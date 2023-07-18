# Write your MySQL query statement below

SELECT S.name
FROM SalesPerson AS S
WHERE S.sales_id NOT IN (
    SELECT O.sales_id
    FROM Orders AS O
    LEFT JOIN Company AS C 
    ON O.com_id = C.com_id
    WHERE name = 'RED'
);