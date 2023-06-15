
include<bits/stdc++.h>

int sumDigit(int n){
    
    // Base call
    if(n==0){
        return n;
    }

    int digit=n%10;

    return digit+sumDigit(n/10);
}


using namespace std;
int main()
{
    int N;
    cin>>N;

    int ans = sumDigit(N);
    cout<<ans;

    return 0;
}
