// Leetcode - 113 - Path Sum II
void dfs(vector<vector<int>> &answer, vector<int> &path, int targetSum, TreeNode *root, int sum)
{
    if (!root)
        return;
    sum += root->val;
    path.push_back(root->val);
    if (sum == targetSum && root->left == nullptr && root->right == nullptr)
    {
        answer.push_back(path);
        path.pop_back();
        return;
    }

    if (root->left)
    {
        dfs(answer, path, targetSum, root->left, sum);
    }
    if (root->right)
    {
        dfs(answer, path, targetSum, root->right, sum);
    }
    sum -= root->val;
    path.pop_back();
}

vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    vector<vector<int>> answer;
    vector<int> path;
    dfs(answer, path, targetSum, root, 0);
    return answer;
}