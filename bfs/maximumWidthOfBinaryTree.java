// Leetcode - 662 - Maximum Width Of Binary tree
class Pair {
    TreeNode node;
    int index;

    Pair(TreeNode _node, int _index) {
        node = _node;
        index = _index;
    }
}

class Solution {

    public int widthOfBinaryTree(TreeNode root) {
        int maxWidth = 0;
        if (root == null)
            return 0;
        ArrayDeque<Pair> q = new ArrayDeque<>();
        q.add(new Pair(root, 0));

        while (!q.isEmpty()) {
            int size = q.size();
            maxWidth = Math.max(maxWidth, q.getLast().index - q.getFirst().index + 1);
            for (int i = 0; i < size; i++) {
                Pair p = q.remove();
                TreeNode temp = p.node;
                int index = p.index;
                if (temp.left != null) {
                    q.add(new Pair(temp.left, 2 * index + 1));
                }
                if (temp.right != null) {
                    q.add(new Pair(temp.right, 2 * index + 2));
                }
            }
        }
        return maxWidth;
    }
};