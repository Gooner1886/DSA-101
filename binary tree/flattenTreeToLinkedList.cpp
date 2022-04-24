// Leetcode - 114 - Flatten Binary Tree to Linked List
void solve(TreeNode *root, vector<int> &preorder)
{
    root->left = NULL;
    root->right = NULL;
    for (int i = 1; i < preorder.size(); i++)
    {
        root->right = new TreeNode(preorder[i]);
        root = root->right;
    }
}

void preorderTraversal(TreeNode *root, vector<int> &preorder)
{
    if (!root)
        return;
    preorder.push_back(root->val);
    preorderTraversal(root->left, preorder);
    preorderTraversal(root->right, preorder);
}
void flatten(TreeNode *root)
{
    if (!root)
        return;
    vector<int> preorder;
    preorderTraversal(root, preorder);
    solve(root, preorder);
}