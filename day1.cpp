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
    /*
    // 3 loops for / while/ do while, same can be done by each just usage and effectiveness of each is different

    int count = 1;
    cout << "using while loop :" << endl;
    while (count <= 10)
    {

    cout << count << endl;
    count++;
}
//  needs all values to be true to execute once

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
*/

    // sum if n odd numbers
    /*
    int inp;
    cout << "Enter a number: ";

    if (!(cin >> inp))
    {
        cout << "Enter a valid number" << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= inp; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "Sum of odd numbers up to " << inp << " is " << sum << endl;

    // using while loop
    int winp;
    cout << "Enter a number: ";
    cin >> winp;
    int sum1 = 0;
    int i = 1;

    while (i <= winp)
    {
        if (i % 2 != 0)
        {
            sum1 += i;
        }
        i++;
    }

    cout << "Sum of odd numbers up to " << winp << " is " << sum1 << endl;

    */

    // prime number check

    int num;
    cout << "Enter a number to check" << endl;
    cin >> num;

    bool isPrime = true;

    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {

            isPrime = false;
            break;
        }

        isPrime = true;
    }

    if (isPrime)
    {
        cout << "is prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }
    
    
    
    
    return 0;
}