// Last updated: 8/7/2026, 7:09:44 PM
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