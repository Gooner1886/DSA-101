// Leetcode - 258 - Add Digits
int ans = 0;

public:
void addDigitsHelper(int num, int sum)
{
    int digit;
    while (num)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    if (sum >= 0 && sum <= 9)
    {
        ans = sum;
        return;
    }
    else
    {
        addDigitsHelper(sum, 0);
    }
}

int addDigits(int num)
{
    int sum = 0;
    addDigitsHelper(num, sum);
    return ans;
}