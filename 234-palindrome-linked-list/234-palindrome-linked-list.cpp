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
        int ans = size(head->next) + 1;
        return ans;
    }
    ListNode* mid(ListNode* head){
        ListNode* slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* rev(ListNode* head){
        ListNode *prev=NULL, *cur=head;
        while(cur!=NULL){
            ListNode *nxt = cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode * temp = rev(mid(head));
        while(head && temp){
            if(head->val==temp->val){
                head=head->next;
                temp=temp->next;
            }
            else return false;
        }
        return true;
    }
    
};