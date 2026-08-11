// Last updated: 8/11/2026, 10:35:19 AM
1class Solution {
2public:
3    int missingInteger(vector<int>& nums) {
4        int sequentialSum = nums[0];
5        int n = nums.size();
6        // max vector size = 50, max sum will occur when full array is
7        // sequential -> form =[1,2,3...,50] Sum= n*(n+1)/2=>12575
8        vector<bool> freq(1276, 0);
9        freq[nums[0]]=1;
10        for (int i = 1; i < n; i++) {
11            if (nums[i] == nums[i - 1] + 1) {
12                sequentialSum += nums[i];
13                freq[nums[i]] = 1;
14            } else {
15                while (i < n) {
16                    freq[nums[i]] = 1;
17                    i++;
18                }
19            }
20        }
21        int ans;
22        for (int i = sequentialSum; i < 1277; i++) {
23            if (freq[i] == 0) {
24                ans = i;
25                break;
26            }
27        }
28        return ans;
29    }
30};