# Write your MySQL query statement below

SELECT id ,
    CASE 
    WHEN p_id IS NUll THEN 'Root'
    WHEN p_id IN (SELECT id FROM Tree) AND id  IN(SELECT p_id FROM Tree) THEN 'Inner'
    ELSE 'Leaf'
    END 
    AS 'Type'
FROM Tree;
