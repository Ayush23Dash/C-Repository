//Leetcode Solution for 'https://leetcode.com/problems/binary-tree-preorder-traversal/'

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
//         vector<int>ans;
//         if(root!=NULL){
            
//             cout<<root->val<<" ";
//             int value = root->val;
//             ans.push_back(value);
//             preorderTraversal(root->left);
//             preorderTraversal(root->right);
//         }
        
//         return ans;
        vector<int>ans;
        if(root==NULL) return ans;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
            
        }
        return ans;
    }
};