// Print powerset of a given string

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void powerset(string str, int i, vector<string> cur)
{
    if (i == str.size())
    {
        for (int j = 0; j < cur.size(); j++)
        {
            cout << cur.at(i) << " ";
        }
    }

    powerset(str, i + 1, cur.push_back(str[i]));
    powerset(str, i + 1, cur);
}

int main()
{
    int i = 0;
    string s;
    cout << "\nEnter the string to find powerset of: ";
    cin >> s;
    vector<string> subsets;
    powerset(s, i, subsets);
}