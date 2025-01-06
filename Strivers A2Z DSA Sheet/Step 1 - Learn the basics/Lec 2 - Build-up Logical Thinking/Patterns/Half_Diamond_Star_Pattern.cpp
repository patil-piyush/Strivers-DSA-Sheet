#include <iostream>
using namespace std;

// Link - https://www.naukri.com/code360/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION


// solution
class Solution
{
public:
    void printTriangle(int n)
    {
        // for simple pyramid
        for (int i = n; i >= 0; i--)
        {
            for (int j = 1; j <=n-i; j++)
            {
                cout<<"*";
            }
            cout << endl;
        }

        // for inverted pyramid
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <=n-i; j++)
            {
                cout<<"*";
            }
            cout << endl;
        }
    }
};
// solution end

int main()
{
    Solution s;
    s.printTriangle(5);
    return 0;
}



