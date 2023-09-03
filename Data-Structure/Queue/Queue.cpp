#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    
    int *arr;
    int size;
    int rear;
    int front;

    Queue(int s){
        this->size = s;
        arr = new int[s];
        this->rear = -1;
        this->front = -1; 
    }

    // check empty function
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }
    
    // enqueue function
    void push(int data){

        if (rear == size-1)
        {
            cout<<"Queue is full"<<endl;
            return;
        }

        rear++;
        arr[rear] = data;
    }
    
    //dequeue function
    int pop(){

        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int front = arr[0];
        for(int i=0; i<rear; i++){
            arr[i] = arr[i+1];
        }
        rear--;

        return front;
    }

    //find front element function
    int front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[0];
    }
};


int main()
{
    Queue q(3);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"Top element is "<<q.front()<<endl;
    cout<<q.pop()<<" is popped out from queue"<<endl;
    cout<<"Top element is "<<q.front()<<endl;

    return 0;
}
