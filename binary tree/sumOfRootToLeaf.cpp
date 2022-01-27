// Leetcode - 1022 - Sum of root to leaf
int sumRootToLeaf(TreeNode *root)
{
    int ans[1];
    ans[0] = 0;

    rootToLeaf(root, "", ans);
    return ans[0];
}

void rootToLeaf(TreeNode *root, string curstr, int ans[])
{
    if (root->left == NULL and root->right == NULL)
    {
        curstr += to_string(root->val);
        ans[0] += stoi(curstr, 0, 2);
        return;
    }

    if (root->left != NULL)
        rootToLeaf(root->left, curstr + to_string(root->val), ans);

    if (root->right != NULL)
        rootToLeaf(root->right, curstr + to_string(root->val), ans);

    return;
}