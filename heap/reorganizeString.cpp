// Leetcode - 767 - Reorganize String
string reorganizeString(string s)
{
    unordered_map<char, int> map;
    priority_queue<pair<int, char>> pq;

    string res(s.size(), ' ');

    for (char ch : s)
    {
        map[ch]++;
    }

    for (auto it : map)
    {
        pq.push({it.second, it.first});
    }

    if (pq.top().first > (s.size() + 1) / 2)
    {
        return "";
    }

    int i = 0, j = 1;

    while (!pq.empty())
    {
        int currFreq = pq.top().first;
        char currChar = pq.top().second;
        pq.pop();

        for (; i < s.size() && currFreq; i += 2)
        {
            res[i] = currChar;
            currFreq--;
        }

        for (; j < s.size() && currFreq; j += 2)
        {
            res[j] = currChar;
            currFreq--;
        }
    }
    return res;
}