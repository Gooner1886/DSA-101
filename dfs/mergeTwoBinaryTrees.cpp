// Leetcode - 617 - Merge Two Binary Trees
TreeNode *mergeTrees(TreeNode *ptr1, TreeNode *ptr2)
{
    if (ptr1 == NULL)
        return ptr2;
    if (ptr2 == NULL)
        return ptr1;
    ptr1->val += ptr2->val;
    ptr1->left = mergeTrees(ptr1->left, ptr2->left);
    ptr1->right = mergeTrees(ptr1->right, ptr2->right);
    return ptr1;
}
TreeNode *merge(TreeNode *root1, TreeNode *root2)
{
    return mergeTrees(root1, root2);
}