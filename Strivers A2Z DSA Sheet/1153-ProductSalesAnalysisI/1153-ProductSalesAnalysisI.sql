-- Last updated: 8/7/2026, 7:09:39 PM
# Write your MySQL query statement below
select p.product_name, s.year, s.price
from Sales s 
left join Product p on s.product_id = p.product_id;