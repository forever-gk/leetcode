// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
//
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
//
//
// Example
//
// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.
//
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head1 = l1;
        ListNode *head2 = l2;
        ListNode *result_head = new ListNode(0);
        ListNode *result = result_head;
        int extra = 0;
        while (head1 != NULL || head2 != NULL || extra){
            int sum = extra + (head1 ? head1->val : 0) + (head2 ? head2->val : 0);
            extra = sum / 10;
            result->next = new ListNode(sum % 10);
            result = result->next;
            head1 = head1 ? head1->next : NULL;
            head2 = head2 ? head2->next : NULL;
        } 
        return result_head->next;
    }
};
