
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i=0,k;
    cin>>n;
    k=n;

    while(n>0){
        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n/=10;
        i++;
    }

    cout<<"Decimal value of "<<k<<" = "<<ans;

    return 0;
}
