// Last updated: 8/7/2026, 7:09:28 PM
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string a = "123456789";
        vector<string> b;
        vector<int> ans;
        for(int i=0; i<a.size(); i++){
            for(int j=i; j<a.size(); j++){
                b.push_back(a.substr(i, j-i+1));
            }
        }

        for(int i=0; i<b.size(); i++){
            if(stoi(b[i])>=low && stoi(b[i])<=high) ans.push_back(stoi(b[i]));
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};