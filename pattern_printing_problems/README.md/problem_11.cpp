#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char ch=i+65;
            cout<<ch;
            // OR char ch='A'+i-1
            // cout<<ch
        }
        cout<<endl;
    }

    return 0;
}