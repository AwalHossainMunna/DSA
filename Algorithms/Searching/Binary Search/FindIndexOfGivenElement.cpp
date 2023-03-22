/*
Question: https://www.geeksforgeeks.org/binary-search/
*/

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}


int main()
{
    int size;
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int Index = binarySearch(arr,size, key);
    cout<<key<<" found at index "<<Index;

    return 0;
}
