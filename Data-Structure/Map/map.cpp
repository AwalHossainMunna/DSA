#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "abc"; // insert value O(log(n))
    m[2] = "cdc";
    m[3] = "cdc";

    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        // access value O(log(n)) 
        cout << (*it).first << " " << (*it).second << endl;
    }

    it = m.find(2); // finding value O(log(n))

    if (it == m.end())
    {
        cout << "No value" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}
