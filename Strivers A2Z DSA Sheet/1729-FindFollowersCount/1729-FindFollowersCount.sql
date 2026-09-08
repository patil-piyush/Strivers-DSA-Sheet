-- Last updated: 9/8/2026, 2:32:59 PM
# Write your MySQL query statement below
select user_id, count(follower_id) as followers_count
from Followers
group by user_id
order by user_id;
