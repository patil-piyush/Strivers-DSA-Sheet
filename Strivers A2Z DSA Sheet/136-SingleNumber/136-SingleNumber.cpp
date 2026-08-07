// Last updated: 8/7/2026, 7:14:59 PM
class Solution {
public:
    // int singleNumber(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     int i=0;
    //     while(i<nums.size()-1){
    //         if(nums[i] == nums[i+1]){
    //             i+=2;
    //         }else{
    //             return nums[i];
    //         }
    //     }
    //     return nums[nums.size()-1];
    // }

    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(int i=0; i<nums.size(); i++)
            x = x ^ nums[i];
        return x;
    }
};