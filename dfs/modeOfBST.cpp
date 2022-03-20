// Leetcode - 501 - Mode of BST
void modeFinder(TreeNode *root, unordered_map<int, int> &frequency)
{
    if (root == NULL)
        return;
    frequency[root->val]++;
    modeFinder(root->left, frequency);
    modeFinder(root->right, frequency);
}

vector<int> findMode(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    unordered_map<int, int> frequency;

    modeFinder(root, frequency);
    int mode = 0;
    for (auto it : frequency)
    {
        if (it.second >= mode)
        {
            mode = it.second;
        }
    }

    for (auto it : frequency)
    {
        if (it.second == mode)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}