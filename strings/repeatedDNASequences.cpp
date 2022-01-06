// Leetcode - 187 - Repeated DNA Sequences

vector<string> findRepeatedDnaSequences(string s)
{
    vector<string> answer;
    if (s.length() < 10)
        return answer;
    unordered_map<string, int> um;
    for (int i = 0; i <= s.length() - 10; i++)
    {
        string current = "";
        current += s[i];
        for (int j = i + 1; j < i + 10; j++)
        {
            current += s[j];
        }
        if (!um[current])
            um[current] = 1;
        else
            um[current]++;
        if (um[current] == 2)
            answer.push_back(current);
    }
    return answer;
}