-- Last updated: 8/7/2026, 7:14:01 PM
# Write your MySQL query statement below
select c.name as Customers
from Customers c
left join Orders o on c.id = o.customerId
where o.id is null;
