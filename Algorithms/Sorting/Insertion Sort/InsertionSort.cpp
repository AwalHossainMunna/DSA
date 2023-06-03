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

void insertionSort(vector<int> &arr)
{
    int i = 1;
    
    while (i < arr.size())
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

    insertionSort(arr);
    printArray(arr);

    return 0;
}
