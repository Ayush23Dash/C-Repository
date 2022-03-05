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
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        ListNode *slow=head, *fast=head,*start=head,*meet;
        bool flag=false;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                meet=slow;
                flag=true;
                break;
            }
        }
        if(!flag) return NULL;
        while(start!=meet){
            start=start->next;
            meet=meet->next;
        }
        return meet;
    }
};