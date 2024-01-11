#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int number=4;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                char ch=number+65+j-1;
                cout<<ch;
            }
        }
        number=number-1;
        cout << endl;
    }

    return 0;
}
