// Last updated: 8/7/2026, 7:06:08 PM
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());
        int sum=0, count=0;
        for(int i=0; i<apple.size(); i++){
            sum+=apple[i];
        }
        int csum=0;
        for(int i=0; i<capacity.size(); i++){
            csum += capacity[i];
            count++;
            if(csum>=sum){
                break;
            }
        }
        return count;
    }
};