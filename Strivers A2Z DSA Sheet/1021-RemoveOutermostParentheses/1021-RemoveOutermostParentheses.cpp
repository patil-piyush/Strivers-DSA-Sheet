// Last updated: 9/8/2026, 2:35:47 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int level = 0;

        for(char ch : s){
            if(ch == '('){
                if(level > 0) result = result + ch;
                level++;
            }
            else if(ch == ')'){
                level--;
                if(level > 0) result = result + ch;
            }
        }

        return result;
    }
};