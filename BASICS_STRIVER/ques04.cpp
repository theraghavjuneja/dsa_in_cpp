// represents the switch case statements question
// link https://www.codingninjas.com/studio/problems/switch-case-statement_8357244?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<iostream>
#include<vector>
using namespace std;
const double pi=3.14;
double areaSwitchCase(int ch, vector<double> a) {
	switch (ch)
    {
    case 1:
        return pi*a[0]*a[0];
        break;
    
    default:
    return a[0]*a[1];
        break;
    }
}
