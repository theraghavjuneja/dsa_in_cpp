#include <iostream>
using namespace std;
// recursion too has got an inbuilt property of going back so it is useful when reversing something
void decimalToBinary(int n)
{
    if (n == 0)
    {
        return;
    }
    int remainder = n % 2;
    // I CANT USE RETURN decimalToBinary(n/2 ) over here since return matlab go out \
    // I just need to make a recursive call
    decimalToBinary(n / 2);
    cout << remainder;
}

int main()
{
    int decimalNumber = 10; // You can change this value to test different numbers
    cout << "Binary representation of " << decimalNumber << " is: ";
    decimalToBinary(decimalNumber);
    cout << endl;

    return 0;
}
