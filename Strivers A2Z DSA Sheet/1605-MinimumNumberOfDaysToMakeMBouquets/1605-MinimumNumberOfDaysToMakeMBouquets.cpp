// Last updated: 8/7/2026, 7:08:13 PM
class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k){
        int cnt=0;
        int bouq=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=day){
                cnt++;
            }
            else{
                bouq += cnt/k;
                cnt=0;
            }
        }
        bouq += cnt/k;
        if(bouq>=m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;

            if(possible(bloomDay,mid,m,k) == true){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};