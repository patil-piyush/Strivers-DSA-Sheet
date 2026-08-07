// Last updated: 8/7/2026, 7:10:34 PM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten = 0, five = 0;
        
        for(int i=0; i<bills.size(); i++){
            if(bills[i] == 5) five++;
            else if(bills[i] == 10){
                if(five>0){
                    ten++;
                    five--;
                }
                else return false;
            }
            else if(bills[i] == 20){
                if(ten>0 && five>0){
                    ten--;
                    five--;
                }
                else if(ten == 0 && five >= 3){
                    five -= 3;
                }
                else return false;
            }
        }
        return true;
    }
};