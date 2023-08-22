
/* 
The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)  */


#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;
    int size;

    Stack(int s){
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int topE(){                        // We can't name the function 'top' cz top is a pre-defined function, instead named this topE
        if(top >= 0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top ==-1){
            return true;
        }
        else{
            return false;
        }
    }
};



int main()
{
    Stack st(5);
    st.push(22);
    st.push(15);
    st.push(75);

    cout<<st.topE()<<endl;

    return 0;
}
