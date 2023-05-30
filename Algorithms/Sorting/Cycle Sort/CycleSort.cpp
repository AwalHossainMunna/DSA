/*
Question: https://www.geeksforgeeks.org/cycle-sort/
*/

#include <bits/stdc++.h>
using namespace std;

void cycleSort(int arr[], int n)
{
    int i=0;

    while (i < n)
    {
        int correct = arr[i] - 1;
        
        if (arr[i] != arr[correct]){
            int temp = arr[i];
            arr[i] = arr[correct];
            arr[correct] = temp;
        }
        else
        {
            i++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i= ; i<size; i++)
    {
        cin >> arr[i];
    }

    cycleSort(arr, size);
    printArray(arr, size);

    return 0;
}
