// Leetcode - 107 - Level Order Traversal II

public void reverseResult(List<List<Integer>> result) {
    for (int i = 0; i < result.size() / 2; i++) {
        List<Integer> temp = result.get(i);
        result.set(i, result.get(result.size() - i - 1));
        result.set(result.size() - i - 1, temp);
    }
}

public List<List<Integer>> levelOrderBottom(TreeNode root) {
    List<List<Integer>> result = new ArrayList<>();
    if(root == null) {
        return result;
    }

    Queue<TreeNode> queue = new LinkedList<>();
    queue.add(root);
    while(!queue.isEmpty()) {
        int size = queue.size();
        List<Integer> currentLevel = new ArrayList<>();
        for(int i = 0; i < size; i++) {
            TreeNode current = queue.remove();
            currentLevel.add(current.val);
            if(current.left != null) {
                queue.add(current.left);
            }
            if(current.right != null) {
                queue.add(current.right);
            }
        }
        result.add(currentLevel);
    }
    reverseResult(result);
    return result;
}
