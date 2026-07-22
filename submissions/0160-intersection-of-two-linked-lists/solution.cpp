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

    ListNode* collisionPoint(ListNode* larger, ListNode* smaller, int difference){

        while(difference){
            larger = larger->next;
            difference--;
        }

        while(smaller && larger){
            if(smaller == larger) return smaller;
            smaller = smaller->next;
            larger = larger->next;
        }
        
        return NULL;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int countA = 0;
        int countB = 0;

        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA){
            countA++;
            tempA = tempA->next;
        }

        while(tempB){
            countB++;
            tempB = tempB->next;
        }


        if(countA>countB){
            return collisionPoint(headA,headB,countA-countB);
        }
        else{
            return collisionPoint(headB,headA,countB-countA);
        }
        
    }
};
