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
    ListNode *oddEvenList(ListNode *head)
    {
        ListNode *oddHead = new ListNode(-1), *oddTail = oddHead;
        ListNode *evenHead = new ListNode(-1), *evenTail = evenHead;
        ListNode *temp;
        ListNode *curr = head;
        int index = 1;

        while (curr)
        {
            temp = curr;
            curr = curr->next;
            temp->next = NULL;

            if (index % 2 != 0)
            {
                oddTail->next = temp;
                oddTail = temp;
            }
            else if (index % 2 == 0)
            {
                evenTail->next = temp;
                evenTail = temp;
            }
            index += 1;
        }

        oddHead = oddHead->next;
        oddTail->next = evenHead->next;

        return oddHead;
    }
};