// Leetcode - 538 - Convert BST to Greater Tree
void convertBSTHelper(TreeNode *root, int &greaterSum)
{
    if (root == NULL)
    {
        return;
    }
    convertBSTHelper(root->right, greaterSum);
    greaterSum += root->val;
    root->val = greaterSum;
    convertBSTHelper(root->left, greaterSum);
}

TreeNode *convertBST(TreeNode *root)
{
    int greaterSum = 0;
    convertBSTHelper(root, greaterSum);
    return root;
}