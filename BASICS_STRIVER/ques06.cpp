// at 5 th index there is a video one can watch
// thius ques 6
// link https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int n;
    int nextNumber;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
            for(int i=0;i<n-1;i++)
    {
        nextNumber=a+b;
        a=b;
        b=nextNumber;
    }
    cout<<nextNumber;

    }
    

}