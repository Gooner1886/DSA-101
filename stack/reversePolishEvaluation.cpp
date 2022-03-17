// Leetcode - 150 - Reverse Polish Evaluation
int evalRPN(vector<string> &tokens)
{
    stack<int> st;
    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            int result;
            if (tokens[i] == "+")
            {
                result = a + b;
            }
            else if (tokens[i] == "-")
            {
                result = a - b;
            }
            else if (tokens[i] == "*")
            {
                result = a * b;
            }
            else
            {
                result = a / b;
            }
            st.push(result);
        }
        else
        {
            st.push(stoi(tokens[i]));
        }
    }
    return st.top();
}