

/* Question: https://leetcode.com/problems/remove-duplicates-from-sorted-list/  */


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* curr = head;

        while (curr != NULL)
        {
            if ((curr->next != NULL) && (curr->val == curr->next->val))
            {
                ListNode *next = curr->next->next;
                ListNode *temp = curr->next;
                delete(temp);
                curr->next = next;
            }
            else
            {
                curr = curr->next;
            }
        }
        return head; 
    }
};
