// Leetcode - 133 - Clone Graph
public void dfs(Node node, Node copy, Node[] visited) {
    visited[copy.val] = copy;
    
    for(Node n: node.neighbors) {
        if(visited[n.val] == null) {
            Node newNode = new Node(n.val);
            copy.neighbors.add(newNode);
            dfs(n, newNode, visited);
        } else {
            copy.neighbors.add(visited[n.val]);
        }
    }
}

public Node cloneGraph(Node node) {
    if(node == null) return node;
    Node copy = new Node(node.val);
    Node[] visited = new Node[101];
    dfs(node, copy, visited);
    return copy;
}