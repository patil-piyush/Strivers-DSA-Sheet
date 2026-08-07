// Last updated: 8/7/2026, 7:11:11 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;

        string doubled = s+s;
        return doubled.find(goal) != string::npos;
    }
};