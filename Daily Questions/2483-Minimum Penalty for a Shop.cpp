#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int bestClosingTime(string customers)
    {
        int n = customers.size();

        // Initial penalty: shop closed all day
        int penalty = 0;
        for (char c : customers)
        {
            if (c == 'Y')
                penalty++;
        }

        int minPenalty = penalty;
        int bestHour = 0;

        // Try opening hour by hour
        for (int i = 0; i < n; i++)
        {
            if (customers[i] == 'Y')
            {
                penalty--; // served customer, reduce penalty
            }
            else
            {
                penalty++; // open but no customer
            }

            if (penalty < minPenalty)
            {
                minPenalty = penalty;
                bestHour = i + 1; // closing happens after this hour
            }
        }

        return bestHour;
    }
};




/*

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Instead of recomputing penalty for every closing hour (which would be slow), you flip the perspective:

- Start with the shop closed all day
    - Penalty = number of `'Y'` (customers came but shop was closed)
- Then open the shop hour by hour
    - If you open during a `'Y'` hour → penalty decreases by 1
    - If you open during an `'N'` hour → penalty increases by 1

So:
`'Y'` → +1 benefit
`'N'` → –1 loss

Now the task becomes:
Find the earliest index where the running score is maximum
This is basically a prefix maximum problem.

Rewriting:
Total Y’s = constant
- Opening a `'Y'` hour saves penalty
- Opening a `'N'` hour adds penalty

So minimizing penalty == maximizing saved penalty.

---


# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize variables
    - Let penalty = total number of 'Y' in customers 
    (Penalty when the shop is closed all day)
    - Let minPenalty = penalty
    - Let bestHour = 0
2. Traverse the string hour by hour
    - For each hour i from 0 to n-1:
        - If customers[i] == 'Y'
             - Decrease penalty by 1 (Customer is served, so penalty reduces)
        - Else (customers[i] == 'N')
            - Increase penalty by 1 (Shop open but no customer)
3. Update best closing time
    - If current penalty is less than minPenalty:
        - Update minPenalty = penalty
        - Update bestHour = i + 1
            (Shop closes after hour i)
4. Return result
    - Return bestHour

---


# Complexity
- Time complexity:  O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- Space complexity:  O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

---


# Code
```cpp []
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();

        // Initial penalty: shop closed all day
        int penalty = 0;
        for (char c : customers) {
            if (c == 'Y') penalty++;
        }

        int minPenalty = penalty;
        int bestHour = 0;

        // Try opening hour by hour
        for (int i = 0; i < n; i++) {
            if (customers[i] == 'Y') {
                penalty--;  // served customer, reduce penalty
            } else {
                penalty++;  // open but no customer
            }

            if (penalty < minPenalty) {
                minPenalty = penalty;
                bestHour = i + 1;  // closing happens after this hour
            }
        }

        return bestHour;
    }
};

```

---


# Please UpVote 
![UpGoingUpGIF.gif](https://assets.leetcode.com/users/images/dd451f4f-555d-492a-b8b1-22af166a36f6_1766729775.1801898.gif)




*/