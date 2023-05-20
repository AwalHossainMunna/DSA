/*
1) Space Complexity: O(1)

2) Time Complexity: O(n) 
* Best case -> O(n) 
* Worst case -> O(n²) 
*/
  

#include <bits/stdc++.h>
using namespace std;

void findClosestSum(int arr[], int x, int size){
    int num1,num2;
    int i=0;
    int j=size-1;
    int dif=INT_MAX;    
    while(i<j){
        int sum=arr[i]+arr[j];
        if(abs(sum-x)<dif){
            num1=i;
            num2=j;
            dif=abs(sum-x);
        }
    
        if(sum>x){
            j--;
        }
        else{
            i++;
        }  
    }
    cout<<arr[num1]+arr[num2];
}


int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    findClosestSum(arr,target,size);

    return 0;
}
