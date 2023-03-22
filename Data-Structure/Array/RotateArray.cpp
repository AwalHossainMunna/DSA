#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k)
{
    int temp[n];
    
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    // copy temp array elements into arr array;
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
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
    int size, k;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    rotateArray(arr, size, k);
    print(arr, size);

    return 0;
}
