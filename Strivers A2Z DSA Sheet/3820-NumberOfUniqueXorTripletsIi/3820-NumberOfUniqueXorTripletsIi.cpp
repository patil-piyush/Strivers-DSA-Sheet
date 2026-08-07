// Last updated: 8/7/2026, 7:05:27 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAX = 1 << 11;
        vector<long long> f(MAX, 0);

        int maxv = 0;
        for (int v : nums) {
            maxv |= v;
            f[v] = 1;
        }

        int shift = 0;
        while ((1 << shift) <= maxv) shift++;
        int n = 1 << shift;

        auto fwht = [&](vector<long long>& a) {
            for (int len = 1; len < n; len <<= 1) {
                for (int i = 0; i < n; i += (len << 1)) {
                    for (int j = 0; j < len; j++) {
                        long long u = a[i + j];
                        long long v = a[i + j + len];
                        a[i + j] = u + v;
                        a[i + j + len] = u - v;
                    }
                }
            }
        };

        // Forward transform
        fwht(f);

        // Cube each value
        for (int i = 0; i < n; i++)
            f[i] = f[i] * f[i] * f[i];

        // Inverse transform (same transform again)
        fwht(f);

        int count = 0;
        for (int i = 0; i < n; i++) {
            // After two FWHTs, values are multiplied by n.
            if ((f[i] >> shift) > 0)
                count++;
        }

        return count;
    }
};