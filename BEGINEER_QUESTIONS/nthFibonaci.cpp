#include<iostream>
using namespace std;
// recursive solution to find the nth fibbonaci number
int nFibonaci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return nFibonaci(n-1)+nFibonaci(n-2);
    }
}
int main()
{
    int n=6;
    cout<<nFibonaci(n)<<endl;
    return 0;
}

// LEETCODE QUSTION NO 509