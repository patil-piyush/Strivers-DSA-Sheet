// Last updated: 9/3/2026, 6:55:57 PM
class Solution {
public:
    bool uniformArray(vector<int>& A) {
        int xmin = A[0];
        bool odd = 0;

        for (auto& x : A) {
            xmin = min(xmin, x);
            odd |= x & 1;
        }

        return (xmin & 1) == odd;
    }
};