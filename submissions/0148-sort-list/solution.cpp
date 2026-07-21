/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head; 
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* leftHead, ListNode* rightHead){

        if(!leftHead || !rightHead){
            return !leftHead ? rightHead : leftHead;
        }  

        if(leftHead->val <= rightHead->val){
            leftHead->next = merge(leftHead->next,rightHead);
            return leftHead;
        }
        else{
            rightHead->next = merge(leftHead,rightHead->next);
            return rightHead;
        }
    }

    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }

        ListNode* middle = findMiddle(head);
        ListNode* leftHead = head; 
        ListNode* rightHead = middle->next;
        middle->next = NULL;

        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);

        return merge(leftHead,rightHead);
    }
};
