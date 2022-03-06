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
    int size(ListNode* head){
        if(!head) return 0;
        int ans = size(head->next) +1;
        return ans;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int sz = size(head);
        int total = sz/k;
        int count=k;
        ListNode *first=head,*prev=NULL,*cur=head;
        if(k==1){
            return head;
        }
        ListNode *ans;
         while(count--){
                ListNode* nxt = cur->next;
                cur->next=prev;
                prev=cur;
                cur=nxt;
            }
        // 1,2,3,4,5,6 k=2
        // 2 1 3 4 5 6
            first->next=cur;
            ans=prev;
            prev=first;
        int temp=total-1;
        // 2 1 3 4 5 6
        while((temp)--)
        {
            first=prev;
            count=k;
            while(count--){
                ListNode* nxt = cur->next;
                cur->next=prev;
                prev=cur;
                cur=nxt;
            }
            // 2 1 <=3 <=4 5 6
            //2 1 4 3 6 5
            // if(first->next->next)
            // prev->next->next=cur;
            auto temp=first->next;
            first->next=prev;
            // first = first->next;
            first=temp;
            first->next=cur;
            
            prev=first;
            // temp->next=prev;
            
            
            // prev=first;
        }
        
        return ans;
    }
};