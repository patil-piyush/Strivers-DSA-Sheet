// Last updated: 9/8/2026, 2:37:15 PM
class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length() != goal.length()) return false;

        for(int i=0; i<s.length(); i++){
            String result = s.substring(i) + s.substring(0,i);
            if(result.equals(goal)) return true;
        }
        return false;
    }
}