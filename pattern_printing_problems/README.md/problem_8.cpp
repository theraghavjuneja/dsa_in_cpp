#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows and columsn u want to print"<<endl;
    cin>>n;
    int number=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<setw(5);
                cout<<number;
                number++;
            }
        }
        cout<<endl;
    }
    return 0;
}