#include <iostream>
using namespace std;

// bitwise operator

/*
    a&b -> this compares the bits of each number and returns 1 only if both are 1,
    a|b -> returns 1 only if any of the bit is 1,
    a^b -> 1 only if only one bit is 1,

    right (>>) and left shift (<<) operator, shifts the bit as directed

    global and local scopes (variable) means the way we defined the variale, inside a function/block -> local scope, whole code, whole section -> global scope

    data types:
        int -> limited value upto : -(2)^31 to (2)^31 - 1 , 4bytes : 32bits

                Type         | Size     | Value Range (Approximate)
                -------------|----------|-------------------------------
                short        | 2 bytes  | –(2)^15 to (2)^15 – 1
                int          | 4 bytes  | –(2)^31 to (2)^31 – 1
                long         | 4 or 8 B | ≥ int, often same as or larger than int
                long long    | 8 bytes  | –(2)^63 to (2)^63 – 1
                signed       | —        | Same as signed int (allows negatives)
                unsigned     | —        | 0 to (2^n) – 1 (only positive values)



*/

bool checkP2(int n)
{
    if (n <= 0)
        return false;

    while (n % 2 == 0)
        n /= 2;

    return n == 1;

    // optimised way :     return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{

    // int a = 4, b = 6;
    // cout << (a & b) << endl;
    // cout << "left shifting a 2 times : " << (a << 2) << endl;
    // cout << "right shifting a 2 times : " << (a >> 2) << endl;

    int c;
    cout << "Enter a number : ";
    cin >> c;

    if (checkP2(c))
    {
        cout << "Number is a power of 2" << endl;
    }
    else
    {
        cout << "Number is NOT a power of 2" << endl;
    }
    return 0;
}