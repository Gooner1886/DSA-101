// Leetcode - Minimum Domino rotations for equal row

int numSwaps(int target, vector<int> A, vector<int> B)
{
    int swapCount = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != target && B[i] != target)
            return INT_MAX;
        else if (A[i] != target)
        {
            swapCount++;
        }
    }
    return swapCount;
}

int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
{
    int minSwaps = min(numSwaps(tops[0], tops, bottoms), numSwaps(bottoms[0], tops, bottoms));
    minSwaps = min(minSwaps, numSwaps(tops[0], bottoms, tops));
    minSwaps = min(minSwaps, numSwaps(bottoms[0], bottoms, tops));
    return minSwaps == INT_MAX ? -1 : minSwaps;
}