-- Last updated: 8/7/2026, 7:11:52 PM
# Write your MySQL query statement below
select name
from Customer
where referee_id <> 2 or referee_id is null;