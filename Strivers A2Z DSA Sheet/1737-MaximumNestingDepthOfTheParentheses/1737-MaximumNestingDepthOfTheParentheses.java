// Last updated: 8/7/2026, 7:08:06 PM
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