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
    int size(ListNode *head){
        if(!head) return 0;
        int ans = size(head->next) + 1;
        return ans;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL) return head;
        int n = size(head);
        ListNode *firstPtr = head, *secondPtr=head;
        int i=1;
        while(i!=k){
            i++;
            firstPtr=firstPtr->next;
        }
        i=0;
        while(i!=(n-k)){
            i++;
            secondPtr=secondPtr->next;
        }
        int temp=firstPtr->val;
        firstPtr->val=secondPtr->val;
        secondPtr->val=temp;
        return head;
    }
};