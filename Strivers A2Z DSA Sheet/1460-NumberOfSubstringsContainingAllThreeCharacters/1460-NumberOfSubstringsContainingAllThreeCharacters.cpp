// Last updated: 8/7/2026, 7:08:40 PM
class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0;
        int l = 0, r = 0, a = 0, b = 0, c = 0;
        while(r<s.size()){
            if(s[r] == 'a') a++;
            if(s[r] == 'b') b++;
            if(s[r] == 'c') c++;

            while(a > 0 && b > 0 && c > 0){
                cnt += s.size() - r;
                if(s[l] =='a') a--;
                if(s[l] =='b') b--;
                if(s[l] =='c') c--;
                l++;
            }
            r++;
        }
        return cnt;
    }
};