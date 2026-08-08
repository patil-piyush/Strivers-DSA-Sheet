// Last updated: 8/8/2026, 10:36:50 AM
// just copied
1class Solution {
2public:
3    vector<int> validSequence(string word1, string word2) {
4        int N = word1.size();
5        int M = word2.size();
6        // Right[i] = max length of word2's suffix that can be formed
7        // using word1[i+1...N-1]
8        int R = M - 1;
9        int C = 0;
10        vector<int> Right(N);
11        for (int i = N - 1; i >= 0; i--) {
12            Right[i] = C;
13            if (R >= 0 && word1[i] == word2[R]) {
14                R--;
15                C++;
16            }
17        }
18
19        vector<int> ans;
20        bool changed = false;
21        int j = 0; // pointer for word2
22
23        for (int i = 0; i < N && j < M; i++) {
24            if (word1[i] == word2[j]) {
25                ans.push_back(i);
26                j++;
27            } else if (!changed && Right[i] >= M - 1 - j) {
28                // Spend our one allowed substitution here
29                ans.push_back(i);
30                j++;
31                changed = true;
32            }
33        }
34
35        if (j == M) {
36            return ans;
37        }
38        return {};
39    }
40};