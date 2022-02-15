// Leetcode - 100 - Same Tree
bool isSame = false;
int end = 0;

void checkSame(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
    {
        return;
    }
    if (p == NULL || q == NULL)
    {
        end = 1;
        isSame = false;
        return;
    }

    if (p->val == q->val)
    {
        isSame = true;
    }
    else
    {
        isSame = false;
        end = 1;
        return;
    }

    checkSame(p->left, q->left);
    if (end == 0)
    {
        checkSame(p->right, q->right);
    }
}

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
        return true;
    checkSame(p, q);
    return isSame;
}