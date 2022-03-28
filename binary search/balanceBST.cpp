// Leetcode - 1382 - Balance BST
vector<TreeNode *> order;
void inorder(TreeNode *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    order.push_back(root);
    inorder(root->right);
}

TreeNode *solve(int start, int end)
{
    if (start > end)
        return NULL;

    int mid = (start + end) / 2;
    TreeNode *head = order[mid];
    head->left = solve(start, mid - 1);
    head->right = solve(mid + 1, end);

    return head;
}

TreeNode *balanceBST(TreeNode *root)
{

    inorder(root);
    return solve(0, order.size() - 1);
}