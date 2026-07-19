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
    ListNode* reverseLL(ListNode* current){
        if(!current || !current->next) return current;

        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(current){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* head2 = reverseLL(slow->next);

        ListNode* temp = head;
        while (head2)
        {
            if(temp->val != head2->val){
                reverseLL(slow->next);
                return false;
            } 
            temp = temp->next;
            head2 = head2->next;
        }

        reverseLL(slow->next);
        return true;

    }
};
