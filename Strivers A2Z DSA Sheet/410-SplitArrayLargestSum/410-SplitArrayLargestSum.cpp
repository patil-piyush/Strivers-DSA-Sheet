// Last updated: 8/7/2026, 7:12:30 PM
class Solution {
public:
    int func(vector<int>& arr, int mid) {
        int sum = 0;
        int painter = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (sum + arr[i] <= mid) {
                sum += arr[i];
            } else {
                painter++;
                sum = arr[i];
            }
        }
        return painter;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {
            int mid = (low + high) / 2;

            if (func(nums, mid) > k)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};
