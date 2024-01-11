#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows and columsn u want to print"<<endl;
    cin>>n;
    int printingThing=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(5);
            cout<<printingThing;
            printingThing++;
        }
        cout<<endl;
    }
    return 0;
}