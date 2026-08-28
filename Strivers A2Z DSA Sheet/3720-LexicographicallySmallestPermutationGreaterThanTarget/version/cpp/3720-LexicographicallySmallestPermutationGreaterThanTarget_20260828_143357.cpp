// Last updated: 8/28/2026, 2:33:57 PM
1class Solution {
2public:
3    string lexGreaterPermutation(string s, string target) {
4        int cnt[26] = {};
5
6        for (char ch : s) cnt[ch - 'a']++;
7        for (char ch : target) cnt[ch - 'a']--;
8
9        int bad = 0, mx = -1;
10
11        for (int c = 0; c < 26; c++) {
12            if (cnt[c] < 0) bad++;
13            if (cnt[c] > 0) mx = c;
14        }
15
16        for (int i = target.size() - 1; i >= 0; i--) {
17            int cur = target[i] - 'a';
18            cnt[cur]++;
19
20            if (cnt[cur] == 0) bad--;
21            else if (cnt[cur] == 1) mx = max(mx, cur);
22
23            if (bad > 0 || mx <= cur) continue;
24
25            int next = cur + 1;
26            while (cnt[next] == 0) next++;
27
28            cnt[next]--;
29
30            string ans = target.substr(0, i);
31            ans += char('a' + next);
32
33            for (int c = 0; c < 26; c++) {
34                ans.append(cnt[c], char('a' + c));
35            }
36
37            return ans;
38        }
39
40        return "";
41    }
42};