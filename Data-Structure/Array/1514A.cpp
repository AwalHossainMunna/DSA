
/* https://codeforces.com/problemset/problem/1514/A */

#include<bits/stdc++.h>  
using namespace std;

void imPerArray(){
    int n,count=0,flag=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        
        int x=arr[i];

        //Ekta number Perfect Square howar sorto- 
        //1.first given number er sqrt() ber kore nibo.
        //2.sqrt() er je value pabo oi value ta k oi value diye multiple korbo
        //3.Jodi multiple er value equal given number ta hoy then its A Perfect Square otherwise vice-versa

        int a=sqrt(x);
        if(a*a!=x){
            flag=1;
        }
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--){
        imPerArray();
    }

    return 0;
}
