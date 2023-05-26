/* https://leetcode.com/problems/sort-colors/ */

#include<bits/stdc++.h>
using namespace std;

void swap(vector<int>& arr, int pos1, int pos2){
    int temp=arr[pos1];
    arr[pos1]=arr[pos2];
    arr[pos2]=temp;
}

void print(vector<int>& nums){
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

void sortColors(vector<int>& nums){
    int s=0;
    int m=0;
    int e=nums.size()-1;

    while(m<=e){
        if(nums[m]==0){
            swap(nums,s,m);
            s++;
            m++;
        }
        else if(nums[m]==2){
            swap(nums,m,e);
            e--;
        }
        else{
            m++;
        }
    }
}


int main()
{
    int size;
    cin>>size;
    vector<int> nums;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    sortColors(nums);
    print(nums);

    return 0;
}
