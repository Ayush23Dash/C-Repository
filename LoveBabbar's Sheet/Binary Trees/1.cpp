class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      if(node == NULL) return ans;
      
      queue<Node *>q;
      q.push(node);
      while(!q.empty()){
          int sz = q.size();
        //   vector<int>level;
          for(int i=0;i<sz;i++){
              Node* currentNode = q.front();
              if(currentNode->left!=NULL) q.push(currentNode->left);
              if(currentNode->right!=NULL) q.push(currentNode->right);
              ans.push_back(currentNode->data);
              q.pop();
          }
          
      }
      return ans;
      
    }
};