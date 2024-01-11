#include<iostream>
using namespace std;
int main()
{
    int n=5;
  
    for(int i=1;i<=5;i++)
    {
        int firstElement=5;
        for(int j=1;j<=2*n;j++)
        {
            if(j<=5)
            {
                if((i+j)>=5+2)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<j;
                }
            }
            else if(j>5)
            {
                if((j-i)>=5)
                {
                    cout<<firstElement-i+1;
                    firstElement=firstElement-1;
                }
                else
                {
                    cout<<"*";
                }
            }
            
            
        }
        cout<<endl;
    }
    return 0;
}