#include <iostream>
using namespace std;

int main()
{

    // conditional statements
    /*
    // int a = 5;
    // cout << typeid(a).name() << endl;
    // cout << "Hello World1" << endl;
    char ch;
    cout << "enter a character : ";
    cin >> ch;
    // we can print the ascii characters based on the alphabets or vice-versa
    // if (ch >= 'a' && ch <= 'z')
    if (ch >= 65 && ch <= 98)

    {
        cout << "lowercase" << endl;
        // cout << ch << endl;
    }
    // else
    // {
        //     cout << "uppercase" << endl;
        // }

    */

    // loops

    // 3 loops for / while/ do while, same can be done by each just usage and effectiveness of each is different

    int count = 1;
    cout << "using while loop :" << endl;
    while (count <= 10)
    {

        cout << count << endl;
        count++;
    }
    // needs all values to be true to execute once

    cout << "using do-while loop :" << endl;
    int co1 = 1;
    do
    {
        cout << co1 << endl;
        co1++;
    } while (co1 <= 5);
    // executes at least one time before verifying the condition

    cout << "using for loop :" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    // most efficient loop, all condition check

    return 0;
}
