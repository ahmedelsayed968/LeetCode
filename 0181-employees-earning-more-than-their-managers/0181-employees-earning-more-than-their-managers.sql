/* Write your T-SQL query statement below */
SELECT name AS Employee FROM Employee e
WHERE managerID IS NOT NULL AND
(salary > (SELECT salary FROM Employee WHERE id = e.managerID))