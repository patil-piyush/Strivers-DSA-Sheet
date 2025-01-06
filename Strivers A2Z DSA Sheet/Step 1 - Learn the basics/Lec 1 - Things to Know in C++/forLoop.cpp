#include <iostream>
using namespace std;

// link - https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    
    // solution
    int n, f1 = 0, f2 = 1, f3;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i != n)
            {
                f3 = f1 + f2;
                f1 = f2;
                f2 = f3;
            }
        }
        cout << f3;
    }
    return 0;
}