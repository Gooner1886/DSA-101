// Leetcode - 71 - Simplify Path
string simplifyPath(string path)
{
    string current = "";
    string answer = "";
    stack<string> st;
    path.push_back('/');
    for (auto letter : path)
    {
        if (letter == '/')
        {
            if (current == ".." && !st.empty())
            {
                st.pop();
            }
            else if (current != "" && current != "." && current != "..")
            {
                st.push(current);
            }
            current = "";
        }
        else
        {
            current += letter;
        }
    }
    while (!st.empty())
    {
        answer = "/" + st.top() + answer;
        st.pop();
    }

    return answer == "" ? "/" : answer;
}