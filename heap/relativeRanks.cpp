// Leetcode - 506 - Relative Ranks
vector<string> findRelativeRanks(vector<int> &score)
{
    priority_queue<int> maxHeap;
    unordered_map<int, int> rank;
    vector<string> answer;
    for (auto it : score)
    {
        maxHeap.push(it);
    }
    int i = 1;
    while (!maxHeap.empty())
    {
        rank[maxHeap.top()] = i;
        maxHeap.pop();
        i++;
    }
    for (int i = 0; i < score.size(); i++)
    {
        auto itr = rank.find(score[i]);
        if (itr != rank.end())
        {
            answer.push_back(to_string(itr->second));
        }
    }
    for (int x = 0; x < answer.size(); x++)
    {
        if (answer[x] == "1")
        {
            answer[x] = "Gold Medal";
        }
        else if (answer[x] == "2")
        {
            answer[x] = "Silver Medal";
        }
        else if (answer[x] == "3")
        {
            answer[x] = "Bronze Medal";
        }
    }
    return answer;
}