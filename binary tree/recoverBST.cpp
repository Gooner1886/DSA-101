// Leetcode - 99 - Recover Binary Search Tree
int i = 0;
void rearrange(TreeNode *root, vector<int> &order)
{
    if (root == NULL)
        return;
    rearrange(root->left, order);
    if (root->val != order[i])
    {
        root->val = order[i];
    }
    i++;
    rearrange(root->right, order);
}

void InorderTraversal(TreeNode *root, vector<int> &order)
{
    if (root == NULL)
        return;
    InorderTraversal(root->left, order);
    order.push_back(root->val);
    InorderTraversal(root->right, order);
}
void recoverTree(TreeNode *root)
{
    vector<int> order;
    InorderTraversal(root, order);
    sort(order.begin(), order.end());

    rearrange(root, order);
}