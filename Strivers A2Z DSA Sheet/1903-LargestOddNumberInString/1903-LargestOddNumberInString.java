// Last updated: 9/8/2026, 2:32:15 PM
class Solution {
    public String largestOddNumber(String num) {
        char[] c = num.toCharArray();
        int max = -1;
        for(int i=c.length-1; i>=0; i--){
            if((c[i] - '0')%2 == 1){
                max = i;
                break;
            }
        }
        return max == -1 ? "" : new String(c, 0, max+1);
    }
}