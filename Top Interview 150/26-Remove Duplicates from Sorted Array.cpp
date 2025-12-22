#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int k = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};



// Problem Statement - 
    // Remove Duplicates from Sorted Array - 
        // You are given a sorted integer array nums.
        // Remove the duplicates in-place such that each element appears only once.
        // Return the number of unique elements k.
        // The first k elements of nums should contain the result.

// Key Idea - Since the array is sorted, all duplicate elements are adjacent.

// Approach (Two Pointer Technique) -
        // Use two pointers
        // i → scans the array
        // k → position to place the next unique element
        // Compare current element with the previous one
        // If different, place it at index k and increment k

// Algorithm -
        // If array is empty, return 0
        // Initialize k = 1
        // Traverse from index 1 to end:
        // If nums[i] != nums[i-1]
        // Assign nums[k] = nums[i]
        // Increment k
        // Return k


// Time & Space Complexity
// Time: O(n)
// Space: O(1) (in-place)

// ## One-Line Reminder for Revision - “Sorted array → duplicates are adjacent → use two pointers.”