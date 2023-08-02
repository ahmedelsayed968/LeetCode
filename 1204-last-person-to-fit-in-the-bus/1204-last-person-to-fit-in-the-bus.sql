/* Write your T-SQL query statement below */

WITH 
 groubed AS (
	SELECT person_name ,turn,person_id,weight, sum_weight = SUM(weight) OVER (ORDER BY turn) 
	FROM Queue
 )
SELECT TOP 1 person_name 
FROM groubed
WHERE sum_weight <= 1000
ORDER BY sum_weight DESC
;