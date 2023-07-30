# Write your MySQL query statement below

# WITH temp AS(
  
    
# )
select p.product_name, sum(unit) as unit
from Orders as o
inner join Products  as p USING (product_id)
where order_date >= '2020-02-01' and order_date < '2020-03-01' 
group by product_id
having sum(unit) >= 100;
