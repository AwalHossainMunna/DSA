#include<iostream>
using namespace std;

void bubbleSort(int a[],int n){

    int temp;
    int flag=0;
    
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
            if(flag==0){
            break;
            }  
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    bubbleSort(arr,size);

    return 0;
}
