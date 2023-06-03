
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int target)
{
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    
    if (target < arr[mid])
    {
        return binarySearch(arr, s, mid - 1, target);
    }

    return binarySearch(arr, mid + 1, e, target);
}

int main()
{
    int size, target;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> target;

    int ans = binarySearch(arr, 0, size - 1, target);
    cout <<"Target is found at index: "<<ans<<endl;

    return 0;
}
