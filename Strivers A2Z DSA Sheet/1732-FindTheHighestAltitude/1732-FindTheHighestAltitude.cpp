// Last updated: 9/8/2026, 2:33:01 PM
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