class Solution {
    public boolean isSymmetric(TreeNode root) {
        if(root == null)
            return true;
        return dfs(root.left, root.right);
    }
    
    private boolean dfs(TreeNode p, TreeNode q) {
        if(p == null && q == null)
            return true;
        if(p == null || q == null)
            return false;
        return p.val == q.val && dfs(p.left, q.right) && dfs(p.right, q.left);
    }
}