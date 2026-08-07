-- Last updated: 8/7/2026, 7:14:15 PM
# Write your MySQL query statement below
SELECT (
    SELECT DISTINCT salary
    FROM Employee
    ORDER BY salary DESC
    LIMIT 1,1
) AS SecondHighestSalary;

