// Last updated: 8/7/2026, 7:17:40 PM
class Solution {
public:
    bool isPalindrome(int x) {
       int r=0, n=x;
       long long rev=0;
       while(n!=0){
        r = n%10;
        rev = rev*10 + r;
        n/=10;
       }
       if(x<0) return false; 
       return x==rev;
    }
};