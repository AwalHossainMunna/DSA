#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                j--;
                n--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   
}



int main()
{
    int size;
    cin >> size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    removeDuplicate(arr, size);
    
    return 0;
}
