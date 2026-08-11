// Last updated: 8/11/2026, 10:33:54 AM
1class Solution {
2public:
3    int missingInteger(vector<int>& nums) {
4        int sum = nums[0];
5
6        // Find sum of longest sequential prefix
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] == nums[i - 1] + 1) {
9                sum += nums[i];
10            } else {
11                break;
12            }
13        }
14
15        // Put all numbers into a set
16        unordered_set<int> st(nums.begin(), nums.end());
17
18        // Find smallest missing number >= sum
19        while (st.count(sum)) {
20            sum++;
21        }
22
23        return sum;
24    }
25};