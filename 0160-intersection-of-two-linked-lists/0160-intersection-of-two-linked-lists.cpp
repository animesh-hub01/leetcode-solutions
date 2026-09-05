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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        
        ListNode* a= headA;
        ListNode* b= headB;

        while(a!=NULL && b!=NULL){
            a=a->next;
            b=b->next;
        }
        if(a==NULL){
            int bExtra=0;
            while(b!=NULL){
                bExtra++;
                b=b->next;
            }
            while(bExtra--){
                headB=headB->next;
            }
        }
        else{
            int aExtra=0;
            while(a!=NULL){
                aExtra++;
                a=a->next;
            }
            while(aExtra--){
                headA=headA->next;
            }
        }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB)
                return headA;
            
            else
                headA=headA->next;
                headB=headB->next;
        }
        return NULL;
    }
};