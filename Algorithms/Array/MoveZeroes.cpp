#include <iostream>
using namespace std;

void moveZeros(int arr[], int n)
{
    int i = 0;

    for (int j=0; j<n; j++)
    {
        if (arr[j] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
}

void print(int arr[], int n)
{

    for (int i=0; i<n; i++)
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
    moveZeros(arr, size);
    print(arr, size);

    return 0;
}
