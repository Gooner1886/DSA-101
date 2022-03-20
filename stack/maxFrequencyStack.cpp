// Leetcode - 895 - Maximum Frequency Stack
class FreqStack
{
    unordered_map<int, int> um;
    unordered_map<int, stack<int>> freqStack;
    int maxOcc = 0;

public:
    FreqStack()
    {
    }

    void push(int val)
    {
        um[val]++;
        maxOcc = max(maxOcc, um[val]);

        freqStack[um[val]].push(val);
    }

    int pop()
    {
        int highestFreq = freqStack[maxOcc].top();
        freqStack[maxOcc].pop();

        um[highestFreq]--;

        if (freqStack[maxOcc].size() == 0)
        {
            maxOcc--;
        }
        return highestFreq;
    }
};