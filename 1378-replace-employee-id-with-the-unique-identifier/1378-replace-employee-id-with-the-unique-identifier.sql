# Write your MySQL query statement below

SELECT U.unique_id,E.name
FROM Employees AS E
LEFT JOIN EmployeeUNI AS U USING (id);

