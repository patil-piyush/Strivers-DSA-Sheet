#include <iostream>
using namespace std;

// Link - https://www.geeksforgeeks.org/problems/triangle-pattern-1661492263/1

// solution
class Solution
{
public:
    void printTriangle(int n)
    {
        // code here
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