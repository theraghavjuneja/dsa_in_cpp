// link https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<iostream>
using namespace std;
int main()
{
    char ch;
    // took the character as an input
    cin>>ch;

    if(int(ch)>=97 &&int(ch)<=122)
    {
        cout<<0<<endl;
    }
    else if(int(ch)>=65&&int(ch)<=90)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    


    return 0;
}