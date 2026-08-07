// Last updated: 8/7/2026, 7:08:59 PM
class Solution {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        int m = grid.length;
        int n = grid[0].length;
        int total = m * n;

        List<Integer> list = new ArrayList<>();

        // Flatten grid
        for (int[] row : grid) {
            for (int val : row) {
                list.add(val);
            }
        }

        // Normalize k
        k = k % total;

        // Create shifted list
        List<Integer> shifted = new ArrayList<>(Collections.nCopies(total, 0));

        for (int i = 0; i < total; i++) {
            shifted.set((i + k) % total, list.get(i));
        }

        // Convert back to 2D list
        List<List<Integer>> result = new ArrayList<>();
        int index = 0;

        for (int i = 0; i < m; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                row.add(shifted.get(index++));
            }
            result.add(row);
        }

        return result;
    }
}