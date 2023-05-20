/*
1) Space Complexity: O(1)

2) Time Complexity: O(n) 
* Best case -> O(n) 
* Worst case -> O(n²)
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> arr, int target){
    int i=0;
    int j=arr.size()-1;
    vector<int> temp;

    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            temp.push_back(i);
            temp.push_back(j);
            return temp;
        }

        if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
}


int main()
{
    int size;
    cin>>size;
    vector<int> arr;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    int target;
    cin>>target;
    vector<int> ans;
    ans =twoSum(arr,target);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
