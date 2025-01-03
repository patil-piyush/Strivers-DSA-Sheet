#include <iostream>
using namespace std;

// Link - https://www.naukri.com/code360/problems/star-diamond_6573686?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// solution
class Solution
{
public:
    void printTriangle(int n)
    {

        // for simple pyramid
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }

            // For printing the stars in each row
            for (int j = 0; j < 2 * i + 1; j++)
            {

                cout << "*";
            }

            // For printing the spaces after the stars in each row
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }

            // As soon as the stars for each iteration are printed, we move to the
            // next row and give a line break otherwise all stars
            // would get printed in 1 line.
            cout << endl;
        }

        // for inverted pyramid
        for (int i = 0; i < n; i++)
        {
            // Print leading spaces
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            // Print stars
            for (int j = 0; j < (2 * (n - i) - 1); j++)
            {
                cout << "*";
            }
            // Move to the next line
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