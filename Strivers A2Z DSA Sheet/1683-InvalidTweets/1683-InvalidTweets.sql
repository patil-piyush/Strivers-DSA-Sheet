-- Last updated: 9/8/2026, 2:33:03 PM
# Write your MySQL query statement below
select tweet_id 
from Tweets
where length(content) > 15;