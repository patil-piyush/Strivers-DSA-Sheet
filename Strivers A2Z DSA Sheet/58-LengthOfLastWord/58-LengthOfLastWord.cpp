// Last updated: 8/7/2026, 7:16:20 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0, i=s.size()-1;
        if(i == 0) return 1;
        while(i>=0 && s[i] == ' ' ) {
            i--;
        }
        while(i>=0 && s[i] != ' ' ){
            cnt++;
            i--;
        }
        return cnt;
    }
};