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
    int size(ListNode *head){
        if(head==NULL) return 0;
        int ans = size(head->next) + 1;
        return ans;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* first=headA,*second=headB;
        //O(N*M) 
        // while(first!=NULL){
        //     second=headB;
        //     while(second!=NULL){
        //         if(second==first){
        //             return second;
        //             break;
        //         }
        //         second=second->next;
        //     }
        //     first=first->next;
        // }
        // return NULL;
        
        //O(N+M)
        int a = size(headA),b=size(headB);
        if(a<b){
            int temp = b-a;
            while(temp--){
                headB=headB->next;
            }
        }else{
            int temp = a-b;
            while(temp--){
                headA=headA->next;
            }
        }
        
        while(headA){
            if(headA==headB) {
                return headA;
                break;
            }
            headA=headA->next;
            headB=headB->next;
            
        }
        return NULL;
    }
};