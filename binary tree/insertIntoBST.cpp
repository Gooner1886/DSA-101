// Leetcode - 701 - Insert into BST
TreeNode *insertIntoBST(TreeNode *root, int val)
{
    if (!root)
        return new TreeNode(val);
    if (root->val > val)
        root->left = insertIntoBST(root->left, val);
    else
        root->right = insertIntoBST(root->right, val);
    return root;
}