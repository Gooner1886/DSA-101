// Leetcode - 682 - Baseball Game
int calPoints(vector<string> &ops)
{
    stack<int> st;
    int result = 0;
    for (auto ch : ops)
    {
        if (ch == "C")
        {
            st.pop();
        }
        else if (ch == "D")
        {
            int last = st.top();
            int doubleScore = last * 2;
            st.push(doubleScore);
        }
        else if (ch == "+")
        {
            int previous1 = st.top();
            st.pop();
            int previous2 = st.top();
            st.pop();
            st.push(previous2);
            st.push(previous1);
            st.push(previous1 + previous2);
        }
        else
        {
            st.push(stoi(ch));
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    return result;
}