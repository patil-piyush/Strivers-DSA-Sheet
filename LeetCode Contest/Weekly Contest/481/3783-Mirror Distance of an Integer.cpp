#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int reverse(int n)
    {
        int r = 0, rev = 0;
        while (n > 0)
        {
            r = n % 10;
            rev = rev * 10 + r;
            n = n / 10;
        }
        return rev;
    }

    int mirrorDistance(int n)
    {
        return abs(n - reverse(n));
    }
};