
/* Question: https://www.codingninjas.com/studio/problems/two-stacks_983634 */


#include <bits/stdc++.h>
using namespace std;

class TwoStack{
    public:

    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int s){
        size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // push in stack 1
    void push1(int num)
    {
        // atleast a empty space present
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    // push in stack 2
    void push2(int num)
    {
        // atleast a empty space present
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    // pop from stack1 and return popped element
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        return -1;
    }

    // pop from stack2 and return popped element
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        return -1;
    }

    // top element of stack1
    int top1E()
    {
        int ans = arr[top1];
        return ans;
    }

    // top element of stack2
    int top2E()
    {
        int ans = arr[top2];
        return ans;
    }
};

int main()
{
    TwoStack ts(6);

    ts.push1(1);
    ts.push1(2);
    ts.push1(3);
    ts.push1(4);
    ts.push1(5);

    ts.push2(6);
    ts.push2(7);
    

    cout<<ts.pop1()<<" is popped out from stack1"<<endl;
    cout<<ts.pop2()<<" is popped out from stack2"<<endl;
    cout<<endl;
    cout << "Top element of stack1 is: " << ts.top1E() << endl;
    cout << "Top element of stack2 is: " << ts.top2E() << endl;

    return 0;
}
