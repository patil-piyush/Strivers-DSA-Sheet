// Last updated: 8/7/2026, 7:12:44 PM
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {

        HashMap<Integer, Integer> map = new HashMap<>();

        // Count frequencies
        for (int num : nums1) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        List<Integer> ans = new ArrayList<>();

        // Find intersection
        for (int num : nums2) {

            if (map.getOrDefault(num, 0) > 0) {
                ans.add(num);
                map.put(num, map.get(num) - 1);
            }
        }

        // Convert List to int[]
        int[] res = new int[ans.size()];

        for (int i = 0; i < ans.size(); i++) {
            res[i] = ans.get(i);
        }

        return res;
    }
}