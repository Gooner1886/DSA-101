// Number of ways in n * m matrix

#include <iostream>
#include <algorithm>
using namespace std;

int noOfWays(int n, int m)
{
    if (n == 1 || m == 1)
    {
        return 1;
    }
    else
    {
        return noOfWays(n - 1, m) + noOfWays(n, m - 1);
    }
}

int main()
{
    int rows, columns;
    cout << "\nEnter the number of rows and columns: ";
    cin >> rows >> columns;
    int ways = noOfWays(rows, columns);
    cout << "\nThe number of ways to traverse from top left to bottom right of " << rows << "X" << columns << " matrix is: " << ways;
}