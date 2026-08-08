class Solution {
public:

    string topoSort(vector<vector<int>>& adj, vector<int>& indegree,
                    vector<int>& present) {

        queue<int> q;

        int totalChars = 0;

        // Add all characters having indegree 0
        for (int i = 0; i < 26; i++) {
            if (present[i]) {
                totalChars++;

                if (indegree[i] == 0) {
                    q.push(i);
                }
            }
        }

        string ans = "";

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            ans += char(node + 'a');

            for (int next : adj[node]) {
                indegree[next]--;

                if (indegree[next] == 0) {
                    q.push(next);
                }
            }
        }

        // Cycle exists
        if (ans.size() != totalChars) {
            return "";
        }

        return ans;
    }

    string findOrder(vector<string> &words) {

        int n = words.size();

        vector<vector<int>> adj(26);
        vector<int> indegree(26, 0);
        vector<int> present(26, 0);

        // Mark characters that are present
        for (string &word : words) {
            for (char ch : word) {
                present[ch - 'a'] = 1;
            }
        }

        // Create edges
        for (int i = 0; i < n - 1; i++) {

            string s1 = words[i];
            string s2 = words[i + 1];

            int len = min(s1.size(), s2.size());

            int j = 0;

            while (j < len && s1[j] == s2[j]) {
                j++;
            }

            // Invalid prefix case
            // Example: "abc" comes before "ab"
            if (j == len && s1.size() > s2.size()) {
                return "";
            }

            // First different character gives the ordering
            if (j < len) {

                int u = s1[j] - 'a';
                int v = s2[j] - 'a';

                adj[u].push_back(v);
                indegree[v]++;
            }
        }

        return topoSort(adj, indegree, present);
    }
};