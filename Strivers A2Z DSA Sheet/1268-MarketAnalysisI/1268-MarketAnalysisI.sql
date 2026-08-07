-- Last updated: 8/7/2026, 7:09:12 PM
# Write your MySQL query statement below
select u.user_id as buyer_id, u.join_date, count(o.item_id) as orders_in_2019
from Users u
left join Orders o on u.user_id = o.buyer_id and o.order_date like '2019%'
group by u.user_id;