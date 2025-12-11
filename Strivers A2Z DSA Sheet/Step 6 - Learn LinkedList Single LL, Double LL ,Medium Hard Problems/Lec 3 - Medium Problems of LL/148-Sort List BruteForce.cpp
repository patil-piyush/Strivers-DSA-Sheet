#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        vector<int> val;

        ListNode *temp = head;
        while (temp)
        {
            val.push_back(temp->val);
            temp = temp->next;
        }

        sort(val.begin(), val.end());

        temp = head;
        int i = 0;
        while (temp)
        {
            temp->val = val[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};