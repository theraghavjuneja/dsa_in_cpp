#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows/columns"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int count=n;
        for(int j=0;j<n;j++)
        {
            cout<<count;
            count--;
        }
        cout<<endl;
    }
    return 0;
}