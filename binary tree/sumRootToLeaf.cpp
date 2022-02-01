// Leetcode - 129 - Sum Root to Leaf Numbers
int totalSum = 0;

public:
int sumNumbers(TreeNode *root)
{
    sumHelper(root, 0);
    return totalSum;
}

void sumHelper(TreeNode *root, int currentSum)
{
    if (root == NULL)
    {
        return;
    }
    currentSum = ((currentSum * 10) + root->val);
    if (root->left == NULL && root->right == NULL)
    {
        totalSum += currentSum;
    }
    else
    {
        sumHelper(root->left, currentSum);
        sumHelper(root->right, currentSum);
    }
}