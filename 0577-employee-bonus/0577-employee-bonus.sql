# Write your MySQL query statement below

SELECT 
        E.name,B.bonus
FROM Employee AS E
LEFT JOIN Bonus AS B
USING(empId)
WHERE bonus IS NULL OR bonus < 1000;
