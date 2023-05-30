/*Question: https://www.geeksforgeeks.org/insertion-sort/

1) Use Case: When (array/vector/list) size/length is small.

2) Space Complexity: O(1)

3) Time Complexity: O(n²) 

* Best case -> O(n) 
* Worst case -> O(n²) 

4) Stable & Adeptable Algorithm.
*/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i = 1;
    
    while (i < n)
    {
        int temp = arr[i];
        
        int j = i - 1;

        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            
            j--;
        }

        i++;
        
        arr[j + 1] = temp;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, size);
    print(arr, size);
    
    return 0;
}
