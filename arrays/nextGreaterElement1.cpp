// Leetcode - 496 - Next Greater Element I
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> answer;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                int k = j + 1;
                while (k < nums2.size())
                {
                    if (nums2[k] > nums2[j])
                    {
                        answer.push_back(nums2[k]);
                        break;
                    }
                    k++;
                }
                if (k == nums2.size())
                {
                    answer.push_back(-1);
                }
            }
        }
    }
    return answer;