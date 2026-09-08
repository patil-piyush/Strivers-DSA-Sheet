// Last updated: 9/8/2026, 2:33:20 PM
class Solution {
    public int maxDepth(String s) {
        int p=0, ans=0;
        for(char c : s.toCharArray()){
            if(c == '(') p++;
            else if(c == ')') p--;

            ans = Math.max(ans, p);
        }
        return ans;
    }
}