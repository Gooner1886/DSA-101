// Leetcode - 17 - Letter Combinations of Phone Number
void generateCombinations(string &digits, vector<string> &hashtable, string &curString, int index, vector<string> &result)
{
    if (index == digits.size())
    {
        result.push_back(curString);
        return;
    }

    for (char ch : hashtable[digits[index] - '0'])
    {
        curString.push_back(ch);
        generateCombinations(digits, hashtable, curString, index + 1, result);
        curString.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> hashtable{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;
    string curString = "";
    if (digits.size() != 0)
    {
        generateCombinations(digits, hashtable, curString, 0, result);
    }
    return result;
}