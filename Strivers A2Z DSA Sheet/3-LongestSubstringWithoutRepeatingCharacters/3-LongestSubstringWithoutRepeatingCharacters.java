// Last updated: 8/7/2026, 7:18:03 PM
class Solution {
    public int lengthOfLongestSubstring(String s) {

        int[] last = new int[256];
        Arrays.fill(last, -1);

        int left = 0;
        int max = 0;

        for (int right = 0; right < s.length(); right++) {

            char ch = s.charAt(right);

            if (last[ch] >= left) {
                left = last[ch] + 1;
            }

            last[ch] = right;

            max = Math.max(max, right - left + 1);
        }

        return max;
    }
}