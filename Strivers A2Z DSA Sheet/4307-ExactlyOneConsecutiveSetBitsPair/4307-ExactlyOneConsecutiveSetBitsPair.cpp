// Last updated: 8/7/2026, 7:04:23 PM
class Solution {
public:
    bool consecutiveSetBits(int n) {
        vector<int> bin;
        if(n==0) return false;
        while(n>0){
            int x = n%2;
            bin.push_back(x);
            n /= 2;
        }
        reverse(bin.begin(), bin.end());

        int cnt=0;
        for(int i=0; i<bin.size()-1; i++){
            if(bin[i] == 1 && bin[i+1]==1) cnt++;
        }
        return cnt == 1;
    }
};