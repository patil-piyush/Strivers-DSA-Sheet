-- Last updated: 9/8/2026, 2:35:09 PM
# Write your MySQL query statement below
select distinct author_id as id
from Views
where author_id = viewer_id
order by id;