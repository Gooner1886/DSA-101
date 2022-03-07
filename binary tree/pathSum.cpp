// Leetcode - 112 - Path Sum
bool hasPathSum(TreeNode *root, int targetSum)
{
    if (!root)
        return false;
    else if (root->left == NULL && root->right == NULL && targetSum - root->val == 0)
        return true;
    else
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
}