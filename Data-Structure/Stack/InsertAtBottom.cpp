
/* Question: https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166*/

#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int x){
    // Base call
    if(s.empty()){
        s.push(x);
        return;
    }

    int val = s.top();
    s.pop();
    
    // Recursive call
    insertAtBottom(s,x);  
    s.push(val);
}

int main()
{
    stack<int> s;
    int size;
    cin>>size;

    for(int i=1; i<=size; i++){
        int x;
        cin>>x;
        s.push(x);
    }

    insertAtBottom(s,5);

    while(!s.empty()){
        int x = s.top();
        cout<<x<<" ";
        s.pop();
    }
    return 0;
}
