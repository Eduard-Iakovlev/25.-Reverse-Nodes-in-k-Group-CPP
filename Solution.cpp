#include "Solution.h"

ListNode* Solution::reverseKGroup(ListNode* head, int k){
    if (head == nullptr or k == 0) return head;
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* prevGrpEnd = dummy;
    while (1)
    {
        ListNode* grpSrt = prevGrpEnd->next;
        ListNode* grpEnd = prevGrpEnd;

        for (int i = 0; i < k and grpEnd; i++)
        {
            grpEnd = grpEnd->next;
        }
        if (!grpEnd) break;

        ListNode* nextGrpSrt = grpEnd->next;
        grpEnd->next = NULL;

        ListNode* newGrpHead = revers(grpSrt);

        prevGrpEnd->next = newGrpHead;

        grpSrt->next = nextGrpSrt;

        prevGrpEnd = grpSrt;
    }
    return dummy->next;
}

ListNode* Solution::revers(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = nullptr;
    ListNode* next = nullptr;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
