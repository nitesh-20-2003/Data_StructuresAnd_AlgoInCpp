class Solution {
public:
    int levels(TreeNode* head)
{
    if(head==NULL)return 0;
    return 1+max(levels(head->left),levels(head->right));
}
int result=0;
void ans(TreeNode* root){
    if(root==NULL)return ;
    result=max((levels(root->left)+levels(root->right)),result);
    ans(root->left);
    ans(root->right);
    
}

    int diameterOfBinaryTree(TreeNode* root) 
    {
        ans(root);
        return result;
    }
};