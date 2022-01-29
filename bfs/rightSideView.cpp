// Leetcode - 199 - Binary tree right side view
void bfs(TreeNode *node, std::vector<int> &res)
{
    if (node == nullptr)
        return;

    std::queue<TreeNode *> q;
    q.push(node);

    while (!q.empty())

    {
        int size = q.size();
        for (int i = 0; i < size; ++i)
        {
            TreeNode *currentNode = q.front();
            q.pop();

            if (i == size - 1)
                res.push_back(currentNode->val);

            if (currentNode->left)
                q.push(currentNode->left);

            if (currentNode->right)
                q.push(currentNode->right);
        }
    }
}

public:
vector<int> rightSideView(TreeNode *root)
{
    std::vector<int> res{};
    bfs(root, res);
    return res;
}