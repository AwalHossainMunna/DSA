
/* Question: https://www.geeksforgeeks.org/delete-middle-element-stack/ */


#include<bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &stack, int count,int size){

    // base case
    if(count == size){
        return;
    }

    //store recursive top element in num
    int val = stack.top();
    stack.pop();
    
    //Recursive call
    deleteMiddle(stack,count+1,size);
    stack.push(num);
}


int main()
{
    stack<int> s;
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        s.push(x);
    }
 
    size = s.size()/2;

    deleteMiddle(s,0,size);

    while(!s.empty()){
        int x = s.top();
        cout<<x<<" ";
        s.pop();
    }

    return 0;
}
