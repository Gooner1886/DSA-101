// Leetcode - 124 - Binary Tree Maximum Path Sum
int maxPath = Integer.MIN_VALUE;
    public int maxPathSum(TreeNode root) {
        if(root == null) return 0;
        maxGain(root);
        return maxPath;
    }
    
    public int maxGain(TreeNode root) {
        if(root == null) return 0;
        int left_gain = Math.max(maxGain(root.left), 0);
        int right_gain = Math.max(maxGain(root.right), 0);
        maxPath = Math.max(maxPath, left_gain + right_gain + root.val);
        return Math.max(left_gain, right_gain) + root.val;
    }