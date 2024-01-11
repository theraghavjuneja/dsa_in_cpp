#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows and columsn u want to print"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<k;
                k=k-1;
            }
        }
        cout<<endl;
    }
    return 0;
}