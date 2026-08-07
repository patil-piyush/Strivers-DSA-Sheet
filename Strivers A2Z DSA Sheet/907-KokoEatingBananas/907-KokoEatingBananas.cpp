// Last updated: 8/7/2026, 7:10:28 PM
#include <algorithm>

class Solution {
public:

    long long func(vector<int>& arr, int mid){

        long long sum = 0;

        for(int i = 0; i < arr.size(); i++){
            sum += (arr[i] + mid - 1) / mid;
        }

        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high){

            int mid = low + (high - low) / 2;

            long long totalhrs = func(piles, mid);

            if(totalhrs <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};