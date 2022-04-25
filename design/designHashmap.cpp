// Leetcode - 706 - Design HashMap
class MyHashMap
{
public:
    vector<pair<int, int>> temp;
    MyHashMap()
    {
    }

    void put(int key, int value)
    {
        remove(key);
        temp.push_back({key, value});
    }

    int get(int key)
    {
        for (auto it : temp)
        {
            if (it.first == key)
            {
                return it.second;
            }
        }
        return -1;
    }

    void remove(int key)
    {
        int isPresent = get(key);
        if (isPresent != -1)
        {
            for (auto it = temp.begin(); it != temp.end(); it++)
            {
                if (it->first == key)
                {
                    temp.erase(it);
                    return;
                }
            }
        }
    }
};
