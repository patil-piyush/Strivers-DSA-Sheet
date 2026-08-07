-- Last updated: 8/7/2026, 7:09:32 PM
# Write your MySQL query statement below
select p.project_id, round(avg(e.experience_years),2) as average_years
from Project p
left join Employee e on p.employee_id = e.employee_id
group by p.project_id;