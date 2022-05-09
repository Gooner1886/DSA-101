// Leetcode - 456 - 132 Pattern
bool find132pattern(vector<int> &nums)
{
    int temp = INT_MIN;
    stack<int> st;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] < temp)
        {
            return true;
        }
        else
        {
            while (!st.empty() && nums[i] > st.top())
            {
                temp = st.top();
                st.pop();
            }
        }
        st.push(nums[i]);
    }
    return false;
}