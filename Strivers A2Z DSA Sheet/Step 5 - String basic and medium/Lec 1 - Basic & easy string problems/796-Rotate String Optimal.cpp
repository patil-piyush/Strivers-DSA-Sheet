#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}



// optimal approach
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.size() != goal.size())
            return false;

        string doubled = s + s;
        return doubled.find(goal) != string::npos;
    }
};