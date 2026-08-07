// Last updated: 8/7/2026, 7:14:34 PM
class Solution {
    public String reverseWords(String s) {
        String[] str = s.trim().split("\\s+");

        String out="";

        for(int i=str.length-1; i>0; i--){
            out=out+str[i]+" ";
        }
        return out+str[0];
    }
}