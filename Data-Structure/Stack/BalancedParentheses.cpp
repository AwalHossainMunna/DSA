
/* Question: https://www.codingninjas.com/studio/problems/valid-parenthesis_795104  */


#include <bits/stdc++.h>
using namespace std;

bool isBalancedParentheses(string expression)
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
        else if(ch == ')' || ch == '}' || ch == ']'){
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
    bool ans = isBalancedParentheses(st);

    if(ans)
    cout<<"Balanced"<<endl;
    else
    cout<<"Not Balanced"<<endl;


    // Balanced: [{()}]
    // Not Balanced: {([}}]

    return 0;
}
