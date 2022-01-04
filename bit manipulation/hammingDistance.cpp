// Leetcode - Hamming Distance

int hammingDistance(int x, int y)
{
    int res = x ^ y;
    int count = 0;
    string binary = bitset<32>(res).to_string();
    for (int i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '1')
            count++;
    }
    return count;
}