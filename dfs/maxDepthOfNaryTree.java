// Leetcode - 559 - Maximum depth of N-ary tree
private int maxHeight;
    public void getMaxDepth(Node root, int height) {
        if(root == null) return;
        maxHeight = Math.max(height, maxHeight);
        for(Node child : root.children) {
            getMaxDepth(child, height + 1);
        }
        
    }
    
    public int maxDepth(Node root) {
        if(root == null) return 0;
        getMaxDepth(root, 1);
        return maxHeight;
    }
