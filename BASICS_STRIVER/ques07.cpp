#include<iostream>
using namespace std;
int main()
{
    // take a no print the sum of digits whic are odd and which are even
    int oddSum=0;
    int evenSum=0;
    int number;
    cin>>number;
    while(number!=0)
    {
        int digit=number%10;
        if(digit%2==0)
        {
            // meaning it is even
            evenSum=evenSum+digit;
        }
        else
        {
            oddSum=oddSum+digit;
        }
        number=number/10;
    }
    cout<<evenSum<<endl;
    cout<<oddSum<<endl;
    return 0;
}