-- Last updated: 8/7/2026, 7:08:31 PM
# Write your MySQL query statement below
select u.unique_id , e.name 
from Employees e
left join EmployeeUNI u on e.id = u.id;