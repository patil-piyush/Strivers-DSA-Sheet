// Last updated: 9/8/2026, 2:33:26 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // Solution 1
        // for(int i=0; i<arr.size(); i++){
        //     if(arr[i]<=k) k++;
        //     else break;
        // }
        // return k;


        // Solution 2

        int low = 0; int high = arr.size()-1;

        while(low<=high){
            int mid = (low+high)/2;

            int missing = arr[mid] - (mid+1);

            if(missing < k) low = mid+1;
            else high = mid-1;
        }
        return high+k+1;
    }
};