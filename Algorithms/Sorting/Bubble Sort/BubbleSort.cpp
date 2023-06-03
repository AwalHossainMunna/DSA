/*Question: https://practice.geeksforgeeks.org/problems/bubble-sort/1

1) Use Case: When (array/vector/list) size/length is Larger.

2) Why Bubble Sort?
- With the first pass through the array the largest element came to the end.

3) Space Complexity: O(1)

4) Time Complexity: O(n) 

* Best case -> O(n) 
* Worst case -> O(n²) 
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &a){

    int temp,flag=0;
    int n=a.size();

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    } 
}

void print(vector<int> &a)
{
    int n=a.size();

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }   
}


int main()
{
    int size,val;
    cin>>size;
    vector<int> arr;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    bubbleSort(arr);
    print(arr);

    return 0;
}
