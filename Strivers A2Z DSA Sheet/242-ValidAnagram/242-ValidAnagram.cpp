// Last updated: 8/7/2026, 7:13:06 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size()!=t.size()) return false;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            if(mp[t[i]] > 0) mp[t[i]]--;
            else return false;
        }
        return true;
    }
};