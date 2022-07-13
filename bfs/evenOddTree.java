// Leetcode - 1609 - Even Odd Tree
public boolean isEvenOddTree(TreeNode root) {
    int last = 0; 
    
    boolean toggle = false; 
    
    Queue<TreeNode> q = new LinkedList();
    
    q.add(root);
    
    while(!q.isEmpty()){
        
        int n = q.size();
        
        for (int i = 0; i<n; i++){
            
            TreeNode node = q.remove();

            if (toggle&&((node.val%2==1)||( i>0 && node.val>=last)))return false; 
             if (!toggle&&((node.val%2==0)||(i>0 && node.val<=last)))return false;
            
            if (node.left!=null)q.add(node.left);
            if (node.right!=null)q.add(node.right);
            
             last = node.val;
        }
        
        toggle = !toggle;
    }
    
    
    return true;
}