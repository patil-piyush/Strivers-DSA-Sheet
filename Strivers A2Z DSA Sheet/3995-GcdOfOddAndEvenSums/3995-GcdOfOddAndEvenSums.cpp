// Last updated: 8/7/2026, 7:05:02 PM
class Solution {
public:
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int gcdOfOddEvenSums(int n) {
        int sume = 0, sumo = 0, cnte = 0, cnto = 0;
        for (int i = 0; i < 2 * n; i++) {
            if (cnte <= n && i % 2 == 0) {
                sume += i;
                cnte += 1;
            } else if (cnto <= n && i % 2 != 0) {
                sumo += i;
                cnto += 1;
            }
        }
        return gcd(sume, sumo);
    }
};