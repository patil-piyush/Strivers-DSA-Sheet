// Last updated: 8/7/2026, 7:07:53 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int curalt = 0;
        int maxalt = 0;
        for(int i=0; i<n; i++){
            curalt += gain[i];
            maxalt = max(curalt, maxalt);
        }
        return maxalt;
    }
};