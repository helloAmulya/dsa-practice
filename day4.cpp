#include <iostream>
using namespace std;

// bitwise operator

/*
    a&b -> this compares the bits of each number and returns 1 only if both are 1,
    a|b -> returns 1 only if any of the bit is 1,
    a^b -> 1 only if only one bit is 1,

    right (>>) and left shift (<<) operator, shifts the bit as directed

*/

int main()
{

    int a = 4, b = 6;
    cout << (a & b) << endl;
    cout<<"left shifting a 2 times : "<<(a<<2)<<endl;
    cout<<"right shifting a 2 times : "<<(a>>2)<<endl;

    return 0;


}