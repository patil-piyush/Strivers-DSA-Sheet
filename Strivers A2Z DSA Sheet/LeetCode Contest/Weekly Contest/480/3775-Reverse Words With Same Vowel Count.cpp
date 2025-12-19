#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    string reverseWords(string s)
    {
        int vowelCount = 0;
        int i = 0;
        while (i < s.size() && s[i] != ' ')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowelCount += 1;
            }
            i += 1;
        }
        i += 1;
        while (i < s.size())
        {
            int j = i, k = i, count = 0;
            char temp;
            while (k < s.size() && s[k] != ' ')
            {
                if (s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u')
                {
                    count += 1;
                }
                k += 1;
            }
            i = k + 1;
            k--;
            if (count == vowelCount)
            {
                while (k > j)
                {
                    temp = s[k];
                    s[k] = s[j];
                    s[j] = temp;
                    j++;
                    k--;
                }
            }
        }
        return s;
    }
};