-- Last updated: 9/8/2026, 2:32:49 PM
# Write your MySQL query statement below
select a.employee_id, a.name, count(b.employee_id) as reports_count, round(avg(b.age)) as average_age
from Employees a
left join Employees b on a.employee_id = b.reports_to
group by b.reports_to
having count(b.reports_to) > 0
order by a.employee_id;