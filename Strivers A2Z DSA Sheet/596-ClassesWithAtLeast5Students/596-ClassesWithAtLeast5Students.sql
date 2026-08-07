-- Last updated: 8/7/2026, 7:11:44 PM
# Write your MySQL query statement below
select class 
from Courses
group by class 
having count(*) >= 5;