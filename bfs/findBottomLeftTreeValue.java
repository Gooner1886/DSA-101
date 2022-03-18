// Leetcode - 513 - Find Bottom Left Tree Value
public int findBottomLeftValue(TreeNode root) { 
    if(root == null) return 0;
    int result = 0;
    
    Queue<TreeNode> queue = new LinkedList<>();
    queue.add(root);
    while(!queue.isEmpty()) {
        int size = queue.size();
        for(int i = 0; i < size; i++) {
            TreeNode current = queue.remove();
            if(i == 0) {
                result = current.val;
            }
            if(current.left != null) {
                queue.add(current.left);
            }
            if(current.right != null) {
                queue.add(current.right);
            }
        }
    }
    return result;
}