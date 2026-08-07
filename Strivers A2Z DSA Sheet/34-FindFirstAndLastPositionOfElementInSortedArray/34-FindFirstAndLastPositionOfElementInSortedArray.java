// Last updated: 8/7/2026, 7:17:08 PM
class Solution {
    public static int firstOcc(int nums[], int target){
        int low = 0;
        int high = nums.length-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid] == target){
                ans = mid;
                high = mid-1;
            }
            else if(nums[mid]<target) low = mid+1;
            else high = mid-1;
        }
        return ans;
    }

    public static int lastOcc(int nums[], int target){
        int low = 0;
        int high = nums.length-1;
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid] == target){
                ans = mid;
                low = mid+1;
            }
            else if(nums[mid]>target) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }

    public int[] searchRange(int[] nums, int target) {
        int first = firstOcc(nums, target);
        int[] ans = {-1, -1};
        if(first == -1) return ans;

        ans[0] = first;
        ans[1] = lastOcc(nums, target);
        return ans;
    }
}