/*  1, 2, 2, 4, 8, 32, 256, 8192......*/

#include<bits/stdc++.h>
using namespace std;

int proFun(int i, int a, int b, int n){

  
    if(n==1){
        return n;
    }
    if(n==2){
        return n;
    }

    int mlti=a*b;

    if(i==n){
        return mlti;
    }

    a=b;
    b=mlti;

    return proFun(i+1,a,b,n);
}


int main()
{
    int n,ans;
    cin>>n;

    ans = proFun(3,1,2,n);
    cout<<ans;
    
    return 0;
}

