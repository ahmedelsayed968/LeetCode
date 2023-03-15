# Write your MySQL query statement below
# Grouping the trans table by the count 
# filter only the row having amount > 

select  u.name, SUM(t.amount) as balance
from 
Users as u Join Transactions as t on u.account = t.account
Group by t.account
having balance > 10000;
