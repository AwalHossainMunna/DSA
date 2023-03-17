#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){

    for (int i = 0; i < n / 2; i++)
    {
        int e = n - i;
        int temp = arr[i];
        arr[i] = arr[e - 1];
        arr[e - 1] = temp;
    }    
}

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
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

    reverseArray(arr,size);
    printArray(arr,size);

    return 0;
}
