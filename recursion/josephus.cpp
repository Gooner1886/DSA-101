// Josephus problem

/* This problem can be solved via recursion in 3 steps: 
Find the base case
Find the relation between problem and subproblem
Generalize the relation
 */

#include <algorithm>
#include <iostream>
using namespace std;

int josephusWinner(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        return (josephusWinner(n - 1, k) + k) % n;
    }
}

int main()
{
    int players, shift;
    cout << "\nEnter the number of players (will start from 0): ";
    cin >> players;
    cout << "\nEnter the shift: ";
    cin >> shift;
    int winnerNumber = josephusWinner(players, shift);
    cout << "\nThe player alive after the game is: " << winnerNumber;

    return 0;
}