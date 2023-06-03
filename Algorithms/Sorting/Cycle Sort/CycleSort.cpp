/*
Question: https://www.geeksforgeeks.org/cycle-sort/
*/

#include <bits/stdc++.h>
using namespace std;

void cycleSort(vector<int> &arr)
{
    int i=0;

    while (i < arr.size())
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

void printArray(vector<int> &arr)
{
    for (int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int size;
    cin>>size;
    vector<int> arr;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cycleSort(arr);
    printArray(arr);

    return 0;
}
