// Leetcode - 394 - Decode String
string decodeString(string s)
{
    stack<int> numberStack;
    stack<string> wordStack;

    string number = "";
    string word = "";

    for (char ch : s)
    {
        if (isdigit(ch))
        {
            number += ch;
        }
        else if (ch == '[')
        {
            numberStack.push(stoi(number));
            wordStack.push(word);
            number = "";
            word = "";
        }
        else if (ch == ']')
        {
            int noOfTimes = numberStack.top();
            numberStack.pop();

            string prevStr = wordStack.top();
            wordStack.pop();

            string temp = "";
            while (noOfTimes != 0)
            {
                temp += word;
                noOfTimes--;
            }

            word = prevStr + temp;
        }
        else
        {
            word += ch;
        }
    }
    return word;
}