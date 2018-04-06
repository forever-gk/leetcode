// Reverse a singly linked list.
//
// click to show more hints.
//
// Hint:
// A linked list can be reversed either iteratively or recursively. Could you implement both?
//


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* tail = head;
        int count = 0;
        while(tail)
        {
            count++;
            if (!tail->next)
                break;
            tail = tail->next;
        }
        while(count > 1){
            moveHead2Tail(head, tail);
    
            count--;
        }
        return head;

        
    }
    void moveHead2Tail(ListNode* &head, ListNode* &tail)
    {
        ListNode* temp = head;
        head = temp->next;
        temp->next = tail->next;
        tail->next = temp;
    }
};*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* tail = head;
        int count = 0;
        while(tail)
        {
            count++;
            if (!tail->next)
                break;
            tail = tail->next;
        }
        moveHead2Tail(head, tail);
        return head;

        
    }
    void moveHead2Tail(ListNode* &head, ListNode* &tail)
    {
        if (head == tail)
            return;
        ListNode* temp = head;
        head = temp->next;
        temp->next = tail->next;
        tail->next = temp;
        //
        moveHead2Tail(head, tail);
    }
};
