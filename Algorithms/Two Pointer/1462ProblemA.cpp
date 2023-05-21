/*https://codeforces.com/contest/1462/problem/A */

#include <bits/stdc++.h>
using namespace std;

void favSeq(){
    int size;
    cin>>size;
    vector<int> arr;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int i=0,x;
    int j=arr.size()-1;
    vector<int> ans;

    while(i<j){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            i++;
            j--;
        }

    if(i==j){
    ans.push_back(arr[i]);
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        favSeq();
    }
  
    return 0;
}
