-- Last updated: 8/7/2026, 7:11:53 PM
# Write your MySQL query statement below
select b.name
from Employee a
join Employee b on a.managerId = b.id
group by b.id
having count(a.id) >= 5; 