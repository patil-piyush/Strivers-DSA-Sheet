-- Last updated: 8/7/2026, 7:14:17 PM
# Write your MySQL query statement below
select p.firstname, p.lastname, a.city, a.state
from Person p
left join Address a on p.personId = a.personId;