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
    // Base call
    if (row == 0)
    {
        return;
    }
    // print stars on columns
    if (col <= row)
    {
        //cout << "*";
        triangle(row, col + 1);
        cout << "*";
    }
    // subtract row by 1 & print new line
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
