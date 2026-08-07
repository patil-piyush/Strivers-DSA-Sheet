// Last updated: 8/7/2026, 7:09:36 PM
class Solution {
public:
    string smallestSubsequence(string s) {
        // 1. Record the last index of each character
        vector<int> lastOccurrence(26, 0);
        for (int i = 0; i < s.length(); i++) {
            lastOccurrence[s[i] - 'a'] = i;
        }

        vector<bool> visited(26, false);
        string result = ""; // Acts as the stack

        // 2. Iterate through the string
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            // If already in result, skip
            if (visited[c - 'a'])
                continue;

            // Greedy Pop:
            // If current char 'c' is smaller than the last char in result
            // AND the last char appears later (lastOccurrence > i), pop it.
            while (!result.empty() && c < result.back() &&
                   lastOccurrence[result.back() - 'a'] > i) {
                visited[result.back() - 'a'] = false;
                result.pop_back();
            }

            // Push current char
            result += c;
            visited[c - 'a'] = true;
        }

        return result;
    }
};