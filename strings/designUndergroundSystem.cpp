// Leetcode - 1396 - Design Underground System
unordered_map<int, pair<string, int>> checkInTime;
unordered_map<string, pair<long, int>> stationTime;

UndergroundSystem()
{
}

void checkIn(int id, string stationName, int t)
{
    if (checkInTime.find(id) == checkInTime.end())
    {
        checkInTime[id] = {stationName, t};
    }
    else
        return;
}

void checkOut(int id, string stationName, int t)
{
    auto &curr = checkInTime[id];
    string startSt = curr.first;
    int startTime = curr.second;
    string key = startSt + ":" + stationName;
    if (stationTime.find(key) == stationTime.end())
    {
        stationTime[key] = {(t - startTime), 1};
    }
    else
    {
        auto &old = stationTime[key];
        old.first += (t - startTime);
        old.second++;
    }
    checkInTime.erase(id);
}

double getAverageTime(string startStation, string endStation)
{
    string key = startStation + ":" + endStation;
    auto &res = stationTime[key];
    double ans = (double)res.first / (double)res.second;
    return ans;
}