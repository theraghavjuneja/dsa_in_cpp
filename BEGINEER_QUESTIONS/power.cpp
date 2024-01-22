#include<iostream>
using namespace std;
int power(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int a=4;
    int b=5;
    cout<<power(4,5);
    return 0;
}