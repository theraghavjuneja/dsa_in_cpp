#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 4; i++)
    {
        int leftStart=1;
        int rightStart=1;
        int k=i-1;
        for (int j = 1; j <= 7; j++)
        {
            
            if(j<=4)
            {
                if((i+j)<=4)
                {
                    cout<<" ";
                }
                else
                {
                    cout<<leftStart;
                    leftStart=leftStart+1;
                }
            }
            else if(j>4)
            {
                
                if((i>=2)&&((j-i)<4))
                {
                    cout<<k;
                    k=k-1;
                }
                
            }
        }
        cout<<endl;
   
    }
    return 0;
}


