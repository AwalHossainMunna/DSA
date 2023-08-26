
/* Question: https://www.codingninjas.com/studio/problems/valid-parenthesis_795104  */


#include <bits/stdc++.h>
using namespace std;

bool validParentheses(string expression)
{
    stack<char> s;
    for (int i = 0; i <expression.length(); i++)
    {
        char ch = expression[i];
        // if ch is an opening bracket push in the stack
        if (ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        // if ch is a closing bracket first check is stack empty? 
        // if not then check stack top element is equal to ch? if yes, then pop from stack.
        else{
            if (!s.empty()){
                if (ch == ')' && s.top() == '(' || ch == '}' && s.top() == '{' || ch == ']' && s.top() == '['){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
    }

    if (s.empty()){
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    string st;
    cout<<"Enter expression: "<<endl;
    getline(cin, st);
    bool ans = validParentheses(st);

    if(ans)
    cout<<"Valid Parentheses"<<endl;
    else
    cout<<"Invalid Parentheses"<<endl;


    // Valid Parentheses: [{()}]
    // Invalid Parentheses: {([}}]

    return 0;
}
