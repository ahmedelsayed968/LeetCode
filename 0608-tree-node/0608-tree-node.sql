# Write your MySQL query statement below

# SELECT id ,
#     CASE 
#     WHEN p_id IS NUll THEN 'Root'
#     WHEN p_id IN (SELECT id FROM Tree) AND id  IN(SELECT p_id FROM Tree) THEN 'Inner'
#     ELSE 'Leaf'
#     END 
#     AS 'Type'
# FROM Tree;

SELECT id , 'Root' AS type
FROM Tree
WHERE p_id IS NULL

UNION
SELECT id , 'Inner' AS type
FROM Tree
WHERE p_id IS NOT NULL AND id IN (SELECT p_id FROM Tree)

UNION
SELECT id , 'Leaf' AS type
FROM Tree
WHERE p_id IS NOT NULL AND (id NOT IN (SELECT DISTINCT p_id FROM Tree WHERE p_id IS NOT NULL))
ORDER BY id ASC;


