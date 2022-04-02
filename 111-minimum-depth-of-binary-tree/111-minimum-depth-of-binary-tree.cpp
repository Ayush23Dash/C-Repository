/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int lH = minDepth(root->left);
        int rH = minDepth(root->right);
        if(lH == 0)
        {
            return rH + 1;
        }
        if(rH == 0)
        {
            return lH + 1;
        }
        int ans = min(lH,rH) + 1;
        return ans;
    }
};