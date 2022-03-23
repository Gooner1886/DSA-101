// Leetcode - 1663 - Smallest String with numeric value
string getSmallestString(int n, int k)
{

    // initialising string of length n with all 'a';
    string str(n, 'a');

    // as all 'a' are 1 and therefore we have subtract there sum;
    k -= n;

    while (k > 0)
    {
        // turning rightmost digit , 'a' into 'z' ('a' + 25, or 'a' + k)
        // while k is positive.
        str[--n] += min(25, k);
        k -= min(25, k);
    }

    return str;
}