// Leetcode - 173 - Binary Search Tree Iterator
class BSTIterator
{
public:
    stack<TreeNode *> st;
    void leftTraversal(TreeNode *root)
    {
        TreeNode *temp = root;
        while (temp != NULL)
        {
            st.push(temp);
            temp = temp->left;
        }
    }

    BSTIterator(TreeNode *root)
    {
        leftTraversal(root);
    }

    int next()
    {
        TreeNode *curr = st.top();
        st.pop();
        leftTraversal(curr->right);
        return curr->val;
    }

    bool hasNext()
    {
        return !st.empty();
    }
};