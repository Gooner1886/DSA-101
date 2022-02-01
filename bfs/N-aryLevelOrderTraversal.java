// Leetcode - 429 - N-ary Tree Level Order Traversal
public List<List<Integer>> levelOrder(Node root) {
    List<List<Integer>> result = new ArrayList<>();
    if(root == null) return result;
    
    Queue<Node> queue = new LinkedList<>();
    queue.add(root);
    
    while(!queue.isEmpty()) {
        List<Integer> levels = new ArrayList<>();
        int size = queue.size();
        
        for(int i = 0; i < size; i++) {
            Node currentNode = queue.remove();
            levels.add(currentNode.val);
            for(Node child : currentNode.children) {
                   queue.add(child); 
            }
        }
        result.add(levels);
    }
    return result;
}
