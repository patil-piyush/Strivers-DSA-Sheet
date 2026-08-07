-- Last updated: 8/7/2026, 7:07:49 PM
# Write your MySQL query statement below
select user_id, count(follower_id) as followers_count
from Followers
group by user_id
order by user_id;
