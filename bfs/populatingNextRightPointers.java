// Leetcode - 116 - Populating Next Right Pointers in Each Node
public Node connect(Node root) {
    if(root == null) {
        return null;
    }
    Queue<Node> queue = new LinkedList<>();
    queue.add(root);
    while(!queue.isEmpty()) {
        int size = queue.size();
        for(int i = 0; i < size; i++) {
            Node current = queue.remove();
            if(i == size - 1) {
                current.next = null;
            } else {
                current.next = queue.peek();
            }
            if(current.left != null) {
                queue.add(current.left);
            }
            if(current.right != null) {
                queue.add(current.right);
            }
        }
    }
    return root;
}