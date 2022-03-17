// Leetcode - 844 - Backspace String Compare
public boolean backspaceCompare(String s, String t) {
    Stack<Character> sStack = new Stack<Character>();
    Stack<Character> tStack = new Stack<Character>();
    for(char c: s.toCharArray()) {
        if(c != '#') {
            sStack.push(c);
        } else if (!sStack.isEmpty()) {
            sStack.pop();
        }
    }
    
    for(char c: t.toCharArray()) {
        if(c != '#') {
            tStack.push(c);
        } else if (!tStack.isEmpty()) {
            tStack.pop();
        }
    }
    
    while(!sStack.isEmpty()) {
        char current = sStack.pop();
        if(tStack.isEmpty() || tStack.pop() != current) {
            return false;
        }
    }
    return sStack.size() == tStack.size();
}
