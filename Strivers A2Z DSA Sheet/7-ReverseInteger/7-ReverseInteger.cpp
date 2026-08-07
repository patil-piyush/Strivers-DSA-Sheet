// Last updated: 8/7/2026, 7:17:51 PM
class Solution {
public:
    int reverse(int x) {
        int r=0; 
        long long rev = 0;
        while(x!=0){
            r = x%10;
            rev = rev*10 + r;
            x=x/10;
        }
        if (rev < INT_MIN || rev > INT_MAX)
            return 0;
        return rev;
    }
};