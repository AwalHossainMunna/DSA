/*
Question: https://www.geeksforgeeks.org/ceiling-in-a-sorted-array/
*/

#include<iostream>
using namespace std;

int ceiling(int arr[], int size, int key)
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
    return s;
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
    int Index = ceiling(arr,size, key);
    cout<<Index;

    return 0;
}
