// Last updated: 9/8/2026, 2:29:29 PM
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