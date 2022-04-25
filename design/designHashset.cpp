// Leetcode - 705 - Design HashSet
public:
vector<int> store[200];
int N = 200;
MyHashSet()
{
}

void add(int key)
{
    int mod = key % N;
    if (!contains(key))
    {
        store[mod].push_back(key);
    }
}

void remove(int key)
{
    int mod = key % N;
    for (int i = 0; i < store[mod].size(); i++)
    {
        if (store[mod][i] == key)
        {
            store[mod].erase(store[mod].begin() + i);
            break;
        }
    }
}

bool contains(int key)
{
    int mod = key % N;
    for (int i = 0; i < store[mod].size(); i++)
    {
        if (store[mod][i] == key)
        {
            return true;
        }
    }
    return false;
}