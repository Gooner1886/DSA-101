// Leetcode - 103 - Binary Tree Zig Zag Level Order Traversal

public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
    List<List<Integer>> result = new ArrayList<>();
    if(root == null) {
        return result;
    }

    boolean reverse = false;
    Queue<TreeNode> queue = new LinkedList<>();
    Stack<Integer> stack = new Stack<>();
    queue.add(root);
    while(!queue.isEmpty()) {
        int size = queue.size();
        List<Integer> currentLevel = new ArrayList<>();
        for(int i = 0; i < size; i++) {
            TreeNode current = queue.remove();
            if(reverse) {
                stack.push(current.val);
            } else {
                currentLevel.add(current.val);    
            }
            
            if(current.left != null) {
                queue.add(current.left);
            }
            if(current.right != null) {
                queue.add(current.right);
            }
        }
        if(reverse) {
            while(!stack.isEmpty()) {
                currentLevel.add(stack.pop());
            }
        }
        reverse = !reverse;
        result.add(currentLevel);
    }
    return result;    
}
