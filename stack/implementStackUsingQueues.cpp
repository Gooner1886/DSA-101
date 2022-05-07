// Leetcode - 225 - Implement Stack using Queues
deque<int> q;
MyStack()
{
}

void push(int x)
{
    q.push_back(x);
}

int pop()
{
    int lastEl = q.back();
    q.pop_back();
    return lastEl;
}

int top()
{
    return q.back();
}

bool empty()
{
    return q.empty();
}