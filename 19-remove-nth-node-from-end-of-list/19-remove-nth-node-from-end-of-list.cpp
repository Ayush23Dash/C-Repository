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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int nodeToDel = count-n+1;
        if(nodeToDel==1){ head=head->next;  return head;}
        // if(nodeTillGoPos==0) return NULL;
        ListNode* t=head;
        head=t;
        while(nodeToDel!=2){
            nodeToDel--;
            t=t->next;
        }
        t->next=t->next->next;
        return head;
        
        
        
    }
};