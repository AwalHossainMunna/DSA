/*

* * * * *
* * * *
* * *
* *
*

*/

#include <bits/stdc++.h>
using namespace std;

void triangle(int row, int col)
{
    if (row == 0)
    {
        return;
    }
    if (col <= row)
    {
        cout << "*";
        triangle(row, col + 1);
    }
    else
    {
        cout << endl;
        triangle(row - 1, 1); 
    }
}

int main()
{
    int N;
    cin >> N;
    triangle(N, 1);

    return 0;
}
