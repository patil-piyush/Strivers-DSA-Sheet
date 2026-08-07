// Last updated: 8/7/2026, 7:08:26 PM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0, rsum=0, maxsum = 0;
        for(int i=0; i<k; i++) lsum = lsum+cardPoints[i];
        maxsum = lsum;

        for(int i=k-1, rindex=cardPoints.size()-1; i>=0; i--){
            lsum = lsum-cardPoints[i];
            rsum = rsum+cardPoints[rindex];
            rindex = rindex - 1;
            maxsum = max(maxsum, lsum+rsum);
        }
        return maxsum;
    }
};