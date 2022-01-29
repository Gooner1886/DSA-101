// Leetcode - 101 - Symmetric Tree
bool isSymmetric(TreeNode *left, TreeNode *right)
{
    if (left == NULL || right == NULL)
    {
        return left == right;
    }
    if (left->val != right->val)
    {
        return false;
    }
    return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);
}

bool isSymmetric(TreeNode *root)
{
    if (root == NULL)
        return true;

    return isSymmetric(root->left, root->right);
}