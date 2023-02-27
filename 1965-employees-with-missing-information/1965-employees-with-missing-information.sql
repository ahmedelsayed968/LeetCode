# Write your MySQL query statement below
SELECT employee_id 
FROM Employees
WHERE Employees.employee_id NOT IN (SELECT employee_id FROM Salaries)
UNION
SELECT employee_id 
FROM Salaries
WHERE Salaries.employee_id NOT IN (SELECT employee_id FROM Employees)
ORDER BY 1;

