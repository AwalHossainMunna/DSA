
#include<bits/stdc++.h>
using namespace std;

int fun(int i, int a, int b, int n){

    if(i==n){
    return a*b;
    }
    
    a+=10;
    b+=10;
    
    return fun(i+1,a,b,n);   
}

int main()
{
    int n,ans;
    cin>>n;

    if(n==1){
        ans=10; 
    }
    else if(n==2){
        ans=20;
    }
    else{
        ans = fun(3,10,20,n);
    }
    
    cout<<"You got "<<ans<<" taka";

    return 0;
}
