// Last updated: 8/7/2026, 7:14:57 PM
class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder sb = new StringBuilder();

        char[] ch = s.toLowerCase().toCharArray();

        for(char c : ch){
            if(Character.isLetterOrDigit(c)) sb.append(c);
        }

        String SNew = sb.toString();
        String SNewRev = sb.reverse().toString();

        return SNew.equals(SNewRev);
    }
}