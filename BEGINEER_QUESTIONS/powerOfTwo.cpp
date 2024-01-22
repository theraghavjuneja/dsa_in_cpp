#include<iostream>
#include<math.h>
using namespace std;
// check whether it is a power of 2 or not
bool isPowerOfTwo(int n)
{
    for(int i=0;i<31;i++)
    {
        if(pow(2,i)==n)
        {
            return true;
        }
    }
    return false;

}
int main()
{
    return 0;
} 