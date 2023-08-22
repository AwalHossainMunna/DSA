#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"Front of queue is: "<<q.front()<<endl;
    cout<<"Size of queue is: "<<q.size()<<endl;
    q.pop();   // 1 is removed from queue

    cout<<"Front of queue is: "<<q.front()<<endl;
    cout<<"Size of queue is: "<<q.size()<<endl;
    q.pop();  // 2 is removed from queue

    cout<<"Front of queue is: "<<q.front()<<endl;
    cout<<"Size of queue is: "<<q.size()<<endl;
    q.pop();  // 3 is removed from queue

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}
