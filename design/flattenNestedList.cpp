// Leetcode - 341 - Flatten Nested List Iterator
vector<int> result;
int pos = 0;
NestedIterator(vector<NestedInteger> &nestedList)
{
    flatten(nestedList);
}

void flatten(vector<NestedInteger> &nestedList)
{
    for (auto curr : nestedList)
    {
        if (curr.isInteger())
        {
            result.push_back(curr.getInteger());
        }
        else
        {
            flatten(curr.getList());
        }
    }
}

int next()
{
    return result[pos++];
}

bool hasNext()
{
    return pos < result.size();
}