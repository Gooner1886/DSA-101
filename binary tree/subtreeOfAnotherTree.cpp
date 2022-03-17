// Leetcode - 572 - Subtree of Another Tree
bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
    if (root == NULL)
        return false;
    else if (isSameTree(root, subRoot))
    {
        return true;
    }
    else
    {
        return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
    }
}

bool isSameTree(TreeNode *s, TreeNode *t)
{
    if (s == NULL || t == NULL)
    {
        return (s == NULL && t == NULL);
    }
    else if (s->val == t->val)
    {
        return (isSameTree(s->left, t->left) && isSameTree(s->right, t->right));
    }
    else
    {
        return false;
    }
}