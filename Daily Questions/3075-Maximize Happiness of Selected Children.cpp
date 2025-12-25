#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        sort(happiness.begin(), happiness.end(), greater<int>());

        long long total = 0;
        for (int i = 0; i < k; i++)
        {
            int currenthappiness = happiness[i] - i;
            if (currenthappiness <= 0)
                break;
            total += currenthappiness;
        }

        return total;
    }
};