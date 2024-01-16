#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str;
    stack<int>s;
    int condition=true;
    int n=10;
    while(condition)
    {
        int remainder=n%2;
        n=n/2;
        s.push(remainder);
        if(n==0)
        {
            condition=false;
        }

    }
    int i=0;
    while(!s.empty())
    {
        str.push_back(s.top());
        i++;
        s.pop();
    }
    cout<<str;

    return 0;
}