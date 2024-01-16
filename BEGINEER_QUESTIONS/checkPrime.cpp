#include<iostream>
using namespace std;
bool primeCheck(int n)
{
    if(n==1)
    {
        // a neither prime nor composite number
        return false;
    }
    if(n==2)
    {
        return true;
    }
    // now coming upon to the cases further on
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{

    cout<<primeCheck(6)<<endl;
    return 0;
}