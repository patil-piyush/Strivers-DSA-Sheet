// Last updated: 8/7/2026, 7:17:13 PM
class Solution {
public:

    int firstOcc(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high){
            int mid = (low + high)/2;

            if(nums[mid] == target){
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target) low = mid+1;
            else high = mid - 1;
        }

        return ans;
    }


    int lastOcc(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = nums.size();

        while(low <= high){
            int mid = (low + high)/2;

            if(nums[mid] == target){
                ans = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target) low = mid+1;
            else high = mid - 1;
        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcc(nums, target);
        vector<int> ans(2,-1);
        if(first == -1) return ans;

        ans.clear();
        ans.push_back(first); 
        ans.push_back(lastOcc(nums,target));

        return ans; 
    }
};