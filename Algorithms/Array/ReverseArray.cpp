#include<iostream>
using namespace std;

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size/2; i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

     for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
