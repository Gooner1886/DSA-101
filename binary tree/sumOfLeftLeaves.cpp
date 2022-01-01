// Leetcode - Sum of left Leaves

void sumUtil(TreeNode *root, int &currentSum, char dir)
{
    if (!root)
        return;
    if (!root->left && !root->right && dir == 'L')
    {
        currentSum += root->val;
    }
    sumUtil(root->left, currentSum, 'L');
    sumUtil(root->right, currentSum, 'R');
}
int sumOfLeftLeaves(TreeNode *root)
{
    int sum = 0;
    sumUtil(root, sum, 'R');
    return sum;
}