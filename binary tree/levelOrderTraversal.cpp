// Level Order Traversal - Hackerrank

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        // Enqueuing left and right children of current node to queue
        if (node->left != NULL)
        {
            q.push(node->left);
        }

        if (node->right != NULL)
        {
            q.push(node->right);
        }
    }
}