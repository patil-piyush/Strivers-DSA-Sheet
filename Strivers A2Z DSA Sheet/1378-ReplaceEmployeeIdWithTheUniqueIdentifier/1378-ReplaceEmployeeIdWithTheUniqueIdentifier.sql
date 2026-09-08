-- Last updated: 9/8/2026, 2:34:03 PM
# Write your MySQL query statement below
select u.unique_id , e.name 
from Employees e
left join EmployeeUNI u on e.id = u.id;