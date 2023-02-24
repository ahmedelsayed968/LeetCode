/* Write your T-SQL query statement below */
SELECT name , population , area
FROM World
WHERE (area IS NOT NULL AND area >= 3000000) OR (population IS NOT NULL AND population >= 25000000);