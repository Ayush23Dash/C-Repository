vector<int> reverseLevelOrder(Node *root)
{
    // code here
    // vector<int>ans;
    // vector<vector<int>>mat;
    // if(root==NULL) return ans;
    // queue<Node* >q;
    // q.push(root);
    // while(!q.empty()){
    //     int sz = q.size();
    //     vector<int>level;
    //     for(int i=0;i<sz;i++){
    //         Node* currentNode = q.front();
    //         if(currentNode->left!=NULL) q.push(currentNode->left);
    //         if(currentNode->right!=NULL) q.push(currentNode->right);
    //         q.pop();
    //         level.push_back(currentNode->data);
    //     }
    //     mat.push_back(level);
    // }
    // for(int i=mat.size()-1;i>=0;i--){
    //     for(int j=0;j<mat[i].size();j++){
    //         ans.push_back(mat[i][j]);
    //     }
    // }
    // return ans;
    
    vector<int>ans;
    if(root==NULL) return ans;
    queue<Node* >q;
    stack<Node* >st;
    q.push(root);
    while(!q.empty()){
        
        int sz = q.size();
        for(int i=0;i<sz;i++){
        Node* currentNode = q.front();
        q.pop();
        if(currentNode->right!=NULL) q.push(currentNode->right);
        if(currentNode->left!=NULL) q.push(currentNode->left);
        st.push(currentNode);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top()->data);
        st.pop();
    }
    return ans;
}