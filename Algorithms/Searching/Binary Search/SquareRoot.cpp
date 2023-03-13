#include<iostream>
using namespace std;

int squareRoot(int a){
    int s = 0, e = a;
    int mid = s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){

        int sqr=mid*mid;

        if(sqr==a){
            return mid;
        }
        else if(sqr<a){
            ans=mid;
            s=mid+1;  
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<squareRoot(num);
    return 0;
}
