// Last updated: 9/8/2026, 2:29:39 PM
class Solution {
    public int minimumPushes(String word) {
        int n = word.length();
        int sum = 0;
        int i=1;
        while(n>=8){
            sum = sum + 8*i;
            n = n-8;
            i++;
        }
        sum = sum + n*i;
        return sum;
    }
}