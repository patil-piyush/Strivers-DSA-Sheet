// Last updated: 9/8/2026, 2:37:26 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;

        string doubled = s+s;
        return doubled.find(goal) != string::npos;
    }
};