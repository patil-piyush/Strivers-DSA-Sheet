-- Last updated: 8/7/2026, 7:09:18 PM
# Write your MySQL query statement below
select distinct author_id as id
from Views
where author_id = viewer_id
order by id;