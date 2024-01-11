#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                char ch=i+j-2+65;
                cout<<ch;
            }
        }
        cout<<endl;
    }
    return 0;
}