#include <iostream>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string result = ""; // for storing the result
        int level = 0;      // to keep track of the current depth of parentheses

        // iterate through each character in the string
        for (char ch : s)
        {
            if (ch == '(')
            { // if we encounter an opening parenthesis
                if (level > 0)
                    result = result + ch; // add it to result if we are not at the outermost level
                level++;                  // increase the depth level
            }
            else if (ch == ')')
            {            // if we encounter a closing parenthesis
                level--; // decrease the depth level
                if (level > 0)
                    result = result + ch; // add it to result if we are not at the outermost level
            }
        }

        return result; // return the final result string
    }
};