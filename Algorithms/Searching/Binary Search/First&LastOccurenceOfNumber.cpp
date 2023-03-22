/*
Question: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/

#include <iostream>
using namespace std;

int firstOccurence(int a[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    
    while (s <= e)
    {
        if (a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key < a[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int lastOccurence(int a[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    
    while (s <= e)
    {
        if (a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > a[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int main()
{
    int size, key;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    cin >> key;

    int first = firstOccurence(arr, size, key);
    int last = lastOccurence(arr, size, key);
    cout << "First occurrance of " << key << " is at index " << first << endl;
    cout << "Last occurrance of " << key << " is at index " << last << endl;
}

