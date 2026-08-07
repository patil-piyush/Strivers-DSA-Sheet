-- Last updated: 8/7/2026, 7:14:03 PM
# Write your MySQL query statement below
select e.name as Employee
from Employee e
left join Employee a on e.managerId = a.id 
where e.salary > a.salary;