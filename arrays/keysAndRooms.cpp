// Leetcode - Keys and Rooms

void utility(int roomNo, vector<int> &visited, vector<vector<int>> &rooms)
{
    visited[roomNo] = 1;

    for (auto key : rooms[roomNo])
    {
        if (!visited[key])
        {
            utility(key, visited, rooms);
        }
    }
}

bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    vector<int> visited(rooms.size(), {0});
    utility(0, visited, rooms);

    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == 0)
        {
            return false;
        }
    }
    return true;
}