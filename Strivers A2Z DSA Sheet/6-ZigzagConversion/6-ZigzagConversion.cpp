// Last updated: 8/7/2026, 7:17:55 PM
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.length()) return s;

        int idx = 0, d=1;
        vector<vector<char>> zigzag(numRows);

        for(int i=0; i<s.length(); i++){
            zigzag[idx].push_back(s[i]);

            if(idx==0) d=1;
            else if(idx == numRows - 1) d = -1;

            idx += d;
        }

        string result;
        for(const auto& zz : zigzag){
            for(char c : zz) result += c;
        }

        return result;
    }
};