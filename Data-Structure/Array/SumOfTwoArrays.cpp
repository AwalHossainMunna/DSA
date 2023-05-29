/*
Question:  https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186
*/

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr2)
{
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i];
    }
}

vector<int> reverse(vector<int> ans)
{
    for (int i = 0; i < ans.size() / 2; i++)
    {
        int k = ans.size() - 1;
        int temp = ans[i];
        ans[i] = ans[k - i];
        ans[k - i] = temp;
    }
    return ans;
}

vector<int> addArray(vector<int> &A, vector<int> &B)
{
    int i = A.size() - 1;
    int j = B.size() - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = A[i];
        int val2 = B[j];

        int sum = val1 + val2 + carry;
        int value = sum % 10;
        carry = sum / 10;
        ans.push_back(value);

        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = A[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = B[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }

    // third case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main()
{
    vector<int> A;
    vector<int> B;
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        B.push_back(y);
    }

    vector<int> arr2 = addArray(A, B);
    print(arr2);

    return 0;
}
