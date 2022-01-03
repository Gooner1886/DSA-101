// Leetcode - Alien dictionary

bool isAlienSorted(vector<string> &words, string order)
{
    unordered_map<char, int> um;
    for (int x = 0; order[x] != '\0'; x++)
    {
        um[order[x]] = x + 1;
    }

    for (int i = 0; i < words.size() - 1; i++)
    {
        string firstWord = words[i];

        string secondWord = words[i + 1];

        for (int j = 0; j < firstWord.length(); j++)
        {

            if (secondWord[j] == '\0')
            {
                return false;
            }
            else if (um[firstWord[j]] < um[secondWord[j]])
            {
                break;
            }
            else if (um[firstWord[j]] > um[secondWord[j]])
            {
                return false;
            }
            else
            {
                continue;
            }
        }
    }
    return true;
}