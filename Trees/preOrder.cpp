#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

class Node{
	public:
	int data;
	Node *left;
	Node *right;
};

Node * createNode(int data)
{
	Node *n =new Node();
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void preOrder(Node*root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	Node *root = createNode(4);
	Node *p1 = createNode(1);
	Node *p2 = createNode(6);
	Node *p3 = createNode(5);
	Node *p4 = createNode(2);

	root->left=p1;
	root->right=p2;
	p1->left=p3;
	p1->right=p4;

	preOrder(root);
return 0;
}