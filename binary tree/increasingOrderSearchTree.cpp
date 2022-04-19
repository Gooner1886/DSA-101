// Leetcode - 897 - Increasing Order Search tree
void InorderTraversal(TreeNode *root, vector<int> &order)
{
    if (root == NULL)
        return;
    InorderTraversal(root->left, order);
    order.push_back(root->val);
    InorderTraversal(root->right, order);
}
TreeNode *increasingBST(TreeNode *root)
{
    if (root == NULL)
        return root;
    vector<int> order;
    InorderTraversal(root, order);
    TreeNode *head = new TreeNode(order[0]);
    TreeNode *res = head;
    for (int i = 1; i < order.size(); i++)
    {
        head->right = new TreeNode(order[i]);
        head = head->right;
    }
    return res;
}