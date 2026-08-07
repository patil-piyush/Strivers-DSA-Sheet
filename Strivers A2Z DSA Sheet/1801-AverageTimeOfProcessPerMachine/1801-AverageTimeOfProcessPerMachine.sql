-- Last updated: 8/7/2026, 7:07:59 PM
# Write your MySQL query statement below
select a.machine_id, round(avg(b.timestamp - a.timestamp),3) as processing_time
from Activity a
left join Activity b on a.machine_id = b.machine_id and a.activity_type = 'start' and b.activity_type = 'end'
group by a.machine_id;