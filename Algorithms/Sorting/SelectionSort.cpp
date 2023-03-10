/*

1) Use Case: When (array/vector/list) size/length is small.

2) Space Complexity: O(1)

3) Time Complexity: O(n²) 

* Best case -> O(n²) 
* Worst case -> O(n²) 

*/
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i=0; i<n-1; i++)
    {
        int minIndex = i;

        for (int j=i+1; j<n; j++)
        {
            if (arr[minIndex] < arr[j])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, size);
    printArray(arr, size);

    return 0;
}
