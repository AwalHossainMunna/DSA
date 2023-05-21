/*https://codeforces.com/contest/381/problem/A */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,sum1=0,sum2=0;
    cin>>size;
    vector<int> arr;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    int i=0,x,z=0;
    int j=arr.size()-1;
    while(i<=j){
        if(arr[i]>arr[j]){
            x=arr[i];
            i++;
        }
        else{
            x=arr[j];
            j--;
        }

        if(z%2==0){
            sum1+=x;
        }
        else{
            sum2+=x;
        }
        z++;
    }

    cout<<sum1<<" "<<sum2<<endl;

    return 0;
}
