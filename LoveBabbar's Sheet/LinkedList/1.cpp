#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

struct Node{
    int data;
    Node *next=NULL;
    Node(int x){
        data=x;
        next=NULL;
    }
};

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* previousptr=NULL;
        Node* currentptr=head;
        Node* nextptr;
        while(currentptr!=NULL){
            nextptr=currentptr->next;
            currentptr->next=previousptr;
            
            previousptr=currentptr;
            currentptr=nextptr;
        }
        head=previousptr;
        return head;
    }
    
};

void printLst(Node* head){
    struct  Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int T,n,l,firstdata;
    cin>>T;
    while(T--){
        struct  Node* head = NULL, *tail=NULL;
        cin>>n;
        cin>>firstdata;
        head=new Node(firstdata);
        tail=head;

        for(int i=1;i<n;i++){
            cin>>l;
            tail->next=new Node(l);
            tail=tail->next;
        }

        Solution ob;
        head=ob.reverseList(head);

        printLst(head);
        cout<<endl;
        
        
    }

return 0;
}