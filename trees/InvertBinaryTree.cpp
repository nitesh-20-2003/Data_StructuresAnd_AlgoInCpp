class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root==NULL)return NULL;
        TreeNode*temp1=root->left;
        TreeNode*temp2=root->right;
        root->left=temp2;
        root->right=temp1;
        invertTree(root->left);
         invertTree(root->right);
         return root;
    }
};