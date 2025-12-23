#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int maxTwoEvents(vector<vector<int>> &events)
    {
        // Sort events by start time
        sort(events.begin(), events.end());

        // Store pairs of (endTime, maxValueSoFar)
        vector<pair<int, int>> best;
        int maxVal = 0;

        // Preprocess: sort by end time to track best value till now
        vector<vector<int>> byEnd = events;
        sort(byEnd.begin(), byEnd.end(),
             [](auto &a, auto &b)
             { return a[1] < b[1]; });

        int ans = 0;
        int j = 0;

        for (auto &e : events)
        {
            int start = e[0], end = e[1], value = e[2];

            // Update best value for events ending before current start
            while (j < byEnd.size() && byEnd[j][1] < start)
            {
                maxVal = max(maxVal, byEnd[j][2]);
                j++;
            }

            // Combine current event with best compatible past event
            ans = max(ans, value + maxVal);

            // Also consider taking only one event
            ans = max(ans, value);
        }

        return ans;
    }
};

/*
## Explanation
    Sort events by start time
    Maintain the maximum value of events that have already ended
    For each event:
        Treat it as the second event
        Add its value to the best compatible past event
    Track the global maximum


    This ensures:
    All valid combinations are considered
    No greedy blindness

## One-Line Reminder
“Greedy by value fails because time overlap matters; must consider best past non-overlapping event.”
*/