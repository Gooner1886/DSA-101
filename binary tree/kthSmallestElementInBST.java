// Leetcode - 230 - Kth Smallest Element in BST
public void inorder(TreeNode root, int nums[], int k) {
    if(root == null) {
        return;
    }
    
    inorder(root.left, nums, k);
    if(++nums[0] == k) {
        nums[1] = root.val;
        return;
    }
    inorder(root.right, nums, k);
}

public int kthSmallest(TreeNode root, int k) {
    int nums[] = new int[2];
    inorder(root, nums, k);
    
    return nums[1];
}