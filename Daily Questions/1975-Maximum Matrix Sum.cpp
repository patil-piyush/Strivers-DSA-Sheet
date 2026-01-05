#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &matrix)
    {
        long long totalSum = 0;
        int neg = 0;
        int minAbs = INT_MAX;

        for (auto &row : matrix)
        {
            for (int v : row)
            {
                if (v < 0)
                    neg++;
                int av = abs(v);
                totalSum += av;
                minAbs = min(minAbs, av);
            }
        }

        return (neg % 2 == 0) ? totalSum : totalSum - 2LL * minAbs;
    }
};



/* 
What this code does?
1. Iterates over every element of the matrix.
2. Converts each value to its absolute value and adds it to totalSum.
3. Counts how many numbers in the matrix are negative.
4. Tracks the smallest absolute value in the entire matrix.
5. Uses the fact that sign flips affect negatives in pairs.
6. If the number of negative values is even, all numbers can be made positive.
7. In that case, returns the sum of all absolute values.
8. If the number of negative values is odd, one value must stay negative.
9. To minimize loss, subtracts 2 × (smallest absolute value) from the total.
10. Returns the maximum possible matrix sum after optimal sign flips.
*/