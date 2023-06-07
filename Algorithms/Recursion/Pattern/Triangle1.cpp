/*

*
* *
* * *
* * * *
* * * * *

*/

#include <bits/stdc++.h>
using namespace std;

void triangle(int row, int col)
{
    //Base call
    if (row == 0)
    {
        return;
    }
    if (col <= row)
    {
        //cout << "*";
        triangle(row, col + 1);
        cout << "*";
    }
    else
    {
        //cout << endl;
        triangle(row - 1, 1);
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    triangle(N, 1);

    return 0;
}
