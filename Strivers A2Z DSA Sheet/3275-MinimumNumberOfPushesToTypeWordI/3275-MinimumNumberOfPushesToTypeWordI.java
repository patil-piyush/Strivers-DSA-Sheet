// Last updated: 8/7/2026, 7:06:20 PM
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