/* Sum of last three digits
  5, 6, 7, 18, 31.....*/


#include<bits/stdc++.h>

int fun(int i, int a, int b, int c, int n ){
    
    int sum =a+b+c;

    if(i==n){
        return sum;
    }

    a=b;
    b=c;
    c=sum;

    return fun(i+1,a,b,c,n);
}

using namespace std;
int main()
{
    int n,ans;
    cin>>n;

    if(n==1){
        ans=5;  
    }
    else if(n==2){
        ans=6;
    }
    else if(n==3){
        ans=7;
    }
    else{

        ans = fun(4,5,6,7,n);
    }

    cout<<ans;

    return 0;
}
