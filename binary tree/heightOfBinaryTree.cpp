// Height of binary Tree - Hackerrank

int height(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }

    return max(1 + height(root->left), 1 + height(root->right));
}