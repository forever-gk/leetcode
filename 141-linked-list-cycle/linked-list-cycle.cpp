//
// Given a linked list, determine if it has a cycle in it.
//
//
//
// Follow up:
// Can you solve it without using extra space?
//


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        if (fast == NULL)
        {
            return false;
        }
        while (1){
            
            fast = fast->next;
            if (fast == NULL)
                return false;
            if (fast == slow)
                return true;
            fast = fast->next;
            if (fast == NULL)
                return false;
            if (fast == slow)
                return true;
            slow = slow->next;
            if (fast == slow)
                return true;
        }
        
        
    }
};
