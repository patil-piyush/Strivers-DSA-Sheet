// Last updated: 8/7/2026, 7:12:37 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp=0,tp=0;
        while(sp < s.length() && tp < t.length()){
            if(s[sp] == t[tp]){
                sp++;
            }
            tp++;
        }
        if(sp == s.length()) return true;
        return false;
    }
};