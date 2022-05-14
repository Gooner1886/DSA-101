// Leetcode - 1641 - Count Sorted Vowel Strings
vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
int count;

void backtrack(string &curr, int n, int index)
{
    if (curr.size() == n)
    {
        count++;
        return;
    }

    for (int i = index; i < vowels.size(); i++)
    {
        curr.push_back(vowels[i]);
        backtrack(curr, n, i);
        curr.pop_back();
    }
}

int countVowelStrings(int n)
{
    string curr;
    backtrack(curr, n, 0);
    return count;
}