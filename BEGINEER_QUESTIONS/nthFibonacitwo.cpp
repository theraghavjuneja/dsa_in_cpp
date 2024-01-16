#include <iostream>
using namespace std;
// will be doing an iterative approach of nth fibbonaci number
int fib(int n)
{
    if(n==1)
    {
        return 1;
    }
    int a = 0;
    int b = 1;
    int nextNumber;
    for (int i = 0; i < n - 1; i++)
    {
        nextNumber = a + b;
        a = b;
        b = nextNumber;
    }
    return nextNumber;
}
int main()
{
    cout<<fib(1);
}