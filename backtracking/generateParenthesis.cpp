// Leetcode - Generate Parenthesis

vector<string> generateParenthesis(int n)
{
    vector<string> answers;
    backtrack(answers, "", 0, 0, n);
    return answers;
}

void backtrack(vector<string> &answers, string current_string, int openCount, int closeCount, int max)
{
    if (current_string.length() == (max * 2))
    {
        answers.push_back(current_string);
        return;
    }

    if (openCount < max)
    {
        backtrack(answers, current_string + '(', openCount + 1, closeCount, max);
    }
    if (closeCount < openCount)
    {
        backtrack(answers, current_string + ')', openCount, closeCount + 1, max);
    }
}