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
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (k < 2 || nums[i] != nums[k - 2])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};



// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/solutions/5792415/video-using-two-pointers-coding-exercise-twyg