// include all library files by using bits/stdc++.h
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
        string word = "";
        vector<string> words;

        for (char ch : s)
        {
            if (ch != ' ')
            {
                word += ch;
            }
            else if (!word.empty())
            {
                words.push_back(word);
                word = "";
            }
        }

        if (!word.empty())
        {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());
        string result = "";
        for (int i = 0; i < words.size(); i++)
        {
            result += words[i];
            if (i < words.size() - 1)
            {
                result += " ";
            }
        }

        return result;
    }
};