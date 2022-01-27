// Leetcode - 1305 - All elements in binary search tree

void traverse(TreeNode *root, vector<int> &list)
{
    if (root == nullptr)
        return;
    traverse(root->left, list);
    list.push_back(root->val);
    traverse(root->right, list);
}

vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
{
    vector<int> answerList;
    traverse(root1, answerList);
    traverse(root2, answerList);
    sort(answerList.begin(), answerList.end());
    return answerList;
}