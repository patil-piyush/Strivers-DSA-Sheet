// Last updated: 8/7/2026, 7:10:40 PM
class Solution {
    public double mincostToHireWorkers(int[] quality, int[] wage, int k) {
        
        int n = quality.length;
        
        // worker structure
        double[][] workers = new double[n][2];
        
        for(int i=0;i<n;i++){
            workers[i][0] = (double)wage[i] / quality[i]; // ratio
            workers[i][1] = quality[i];
        }
        
        // sort by ratio
        Arrays.sort(workers, (a,b) -> Double.compare(a[0], b[0]));
        
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        
        int qualitySum = 0;
        double result = Double.MAX_VALUE;
        
        for(int i=0;i<n;i++){
            
            int q = (int)workers[i][1];
            
            maxHeap.add(q);
            qualitySum += q;
            
            if(maxHeap.size() > k){
                qualitySum -= maxHeap.poll();
            }
            
            if(maxHeap.size() == k){
                double cost = workers[i][0] * qualitySum;
                result = Math.min(result, cost);
            }
        }
        
        return result;
    }
}