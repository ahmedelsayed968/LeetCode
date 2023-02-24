/* 
 Please write a DELETE statement and DO NOT write a SELECT statement.
 Write your T-SQL query statement below
 */

DELETE person1
FROM Person person1 , Person person2
WHERE person1.email = person2.email AND person1.id > person2.id;