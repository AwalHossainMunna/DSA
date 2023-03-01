#include<iostream>
using namespace std;

int maxElement(int a[], int n){
    int max=a[0];

    for(int i=1; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int minElement(int a[], int n){
    int min=a[0];

    for(int i=1; i<n; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Minimum element is: "<<minElement(arr,size)<<endl;
    cout<<"Maximum element is: "<<maxElement(arr,size)<<endl;
    return 0;
}
