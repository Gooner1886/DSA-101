// Leetcode - 98 - Validate Binary Search Tree 
public boolean validBST(TreeNode root, TreeNode l, TreeNode r) {
    if(root == null) {
        return true;
    }
    if(l != null && root.val <= l.val) return false;
    if(r != null && root.val >= r.val) return false;
    return validBST(root.left,l,root) && validBST(root.right,root,r);
}

public boolean isValidBST(TreeNode root) {
    return validBST(root, null, null);
}
