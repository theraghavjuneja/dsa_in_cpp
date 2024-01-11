// link https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<iostream>
using namespace std;
// Integer: 4 bytes
// Long: 8 bytes
// Float: 4 bytes
// Double: 8 bytes
// Character: 1 byte
// type given inside the function need to return the bytes
int dataTypes(string type) {
	if((type=="Integer")||(type=="Float"))
    {
        return 4;
    }
    if((type=="Long")||(type=="Double"))
    {
        return 8;
    }
    else
    {
        return 1;
    }
}

int main()
{
    return 0;
}