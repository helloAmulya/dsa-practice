#include <iostream>
using namespace std;

// void changeA(int a)
void changeA(int &a) // pass using &a and it will change
{
    a = 20;
}
int main()
{

    int a = 10;
    changeA(a);
    cout << a << endl;

    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;  // value of a (5)
    // cout << **q << endl; // value of a (5)
    // cout << p << endl;   // address of a
    // cout << *q << endl;  // address of a (since *q = p)

    // int a = 123;
    // int *b = &a;
    // int **c = &b;
    // int *ptr = NULL;
    // cout << "value of a : " << a << ", address of a : " << b << endl;
    // cout << "value of b: " << *b << ", address of b : " << &b << endl;
    // cout << "de-referencing : " << *(&a) << endl; // get value of a
    // cout << "de-referencing : " << *(&b) << endl; // get the value(address of a) of b
    // cout << "With ptr : " << *(b) << endl;        // value of a
    // cout << "for c : " << c << endl;              // value of a

    return 0;
}