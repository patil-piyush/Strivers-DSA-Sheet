// Last updated: 9/8/2026, 2:29:20 PM
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int res = 0;
        uint64_t mask = 0;
        
        for (int l = 0, r = 0; r < s.length(); r++) {
            int k = (s[r] & 31) << 1;
            mask += 1ULL << k;
            
            while (((mask >> k) & 3) == 3)
                mask -= 1ULL << ((s[l++] & 31) << 1);
                
            res = max(res, r - l + 1);
        }
        
        return res;
    }
};