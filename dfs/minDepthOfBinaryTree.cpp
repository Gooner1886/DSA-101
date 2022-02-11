// Leetcode - 111 - Minimum depth of Binary Tree
int minHeight = INT_MAX;

public:
void minimumHeight(TreeNode *root, int height)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        minHeight = min(minHeight, height);
    }

    minimumHeight(root->left, height + 1);
    minimumHeight(root->right, height + 1);
}

int minDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;
    minimumHeight(root, 1);
    return minHeight;
}