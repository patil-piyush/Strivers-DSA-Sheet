// Last updated: 9/8/2026, 2:34:27 PM
class Solution {
public:

    bool func(vector<int>& arr, int mid, int t){
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += (arr[i]+mid-1)/mid;
        }
        if(sum <= t) return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans;
        while(low<=high){
            int mid = (low+high)/2;
            if(func(nums, mid, threshold) == true){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};