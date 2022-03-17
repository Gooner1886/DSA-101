// Leetcode - 20 - Valid Parenthesis
bool isValid(string s)
{
    stack<char> st;
    char current;
    if (s[0] == ')' || s[0] == '}' || s[0] == ']')
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (st.empty())
                return false;
            current = st.top();
            st.pop();
            if (current != '(')
                return false;
        }
        else if (s[i] == '}')
        {
            if (st.empty())
                return false;
            current = st.top();
            st.pop();
            if (current != '{')
                return false;
        }
        else if (s[i] == ']')
        {
            if (st.empty())
                return false;
            current = st.top();
            st.pop();
            if (current != '[')
                return false;
        }
    }
    return st.empty() == 1 ? true : false;
}