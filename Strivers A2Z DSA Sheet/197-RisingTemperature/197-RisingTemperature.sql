-- Last updated: 8/7/2026, 7:13:52 PM
# Write your MySQL query statement below
select a.id 
from Weather a
join Weather b on DATEDIFF(a.recordDate, b.recordDate) = 1
where a.temperature > b.temperature;
