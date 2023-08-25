/*  Question:  https://practice.geeksforgeeks.org/problems/queue-reversal/1  */

#include<bits/stdc++.h>
using namespace std;

void revQueue(queue<int> q){

    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    int n;
    cin>>n;
    queue<int> q;

    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        q.push(x);
    }

    revQueue(q);

    return 0;
}
