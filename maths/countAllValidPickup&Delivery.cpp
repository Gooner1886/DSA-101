// Leetcode - 1359 - Count All Valid Pickup and Delivery options
int countOrders(int n)
{
    int mod = 1e9 + 7;
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans * i) % mod;

        ans = (ans * (2 * i - 1)) % mod;
    }
    return ans;
}