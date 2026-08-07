// Last updated: 8/7/2026, 7:04:52 PM
class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        string s = to_string(n);
        string a;

        for (char c : s) {
            if (c != '0')
                a += c;
            sum += c - '0';
        }

        long long num = a.empty() ? 0 : stoll(a);
        return num * sum;
    }
};