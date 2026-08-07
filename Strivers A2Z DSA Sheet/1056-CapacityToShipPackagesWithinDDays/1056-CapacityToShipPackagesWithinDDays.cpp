// Last updated: 8/7/2026, 7:09:53 PM
class Solution {
public:
    int func(vector<int>& wt, int cap){
        int load = 0;
        int reqdays = 1;
        for(int i=0; i<wt.size(); i++){
            if(load+wt[i] > cap){
                load = wt[i];
                reqdays++;
            }
            else load+=wt[i];
        }
        return reqdays;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);

        while(low<= high){
            int mid = (low+high)/2;

            int reqdays = func(weights, mid);
            if(reqdays > days){
                low = mid+1;
            }
            else high = mid-1;
        }
        return low;
    }
};