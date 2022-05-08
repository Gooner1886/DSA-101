// Leetcode - 1323 - Maximum 69 Number
int maximum69Number(int num)
{
    string numString = to_string(num);
    for (int i = 0; numString[i] != '\0'; i++)
    {
        if (numString[i] == '6')
        {
            numString[i] = '9';
            break;
        }
    }
    int ans = stoi(numString);
    return ans;
}