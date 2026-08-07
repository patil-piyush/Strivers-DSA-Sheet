// Last updated: 8/7/2026, 7:12:07 PM
class Solution {

    public String reverseStr(String s, int k) {
        char[] str = s.toCharArray();

        for(int i=0; i<str.length; i+= k*2){
            int left = i;
            int right = Math.min(str.length - 1, i+k-1);

            while(left<right){
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;

                left++;
                right--;
            }

        }

        return new String(str);
    }
}