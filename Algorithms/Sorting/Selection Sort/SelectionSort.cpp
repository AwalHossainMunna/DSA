/*Question: https://www.geeksforgeeks.org/selection-sort/

1) Use Case: When (array/vector/list) size/length is small.

2) Space Complexity: O(1)

3) Time Complexity: O(n²) 

* Best case -> O(n²) 
* Worst case -> O(n²) 

*/


#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size()-1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];

        arr[i] = arr[minIndex];

        arr[minIndex] = temp;
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

    selectionSort(arr);
    printArray(arr);

    return 0;
}
