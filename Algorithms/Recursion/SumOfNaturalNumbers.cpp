#include<bits/stdc++.h>
using namespace std;

int recSum(int n){

    if(n==1){
        return n;
    }
    return n + recSum(n-1);
}

int main()
{
    int N;
    cin>>N;

    int ans = recSum(N);
    cout<<ans;

    return 0;
}
