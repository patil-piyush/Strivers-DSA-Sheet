// Last updated: 9/8/2026, 2:32:22 PM
class Solution {
public:
    string largestOddNumber(string num) {
        int end = -1;
        int i;

        for(int i  = num.size()-1; i>=0; i--){
            if((num[i] - '0')%2 == 1){
                end = i;
                break; 
            }
        }
        

        i = 0;
        while(i<=end && num[i]=='0') i++;

        return num.substr(i, end - i+1);
    }
};