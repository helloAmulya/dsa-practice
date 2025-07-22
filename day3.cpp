#include <iostream>
using namespace std;

int printSum(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * (fact(n - 1));
}

int sumOfdigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}

// binomial coefficient
float binomial(int n, int r)
{
    return (float)fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    // functions basics

    // in context of c++ stack is one of the important data structures,
    // the main() is stored in the stack frame (call stack)

    // pass by value - copy of the arguments
    // pass by reference - use &a,& etc or pointer *a

    int n, r;

    cout << "Enter numbers :: ";
    cin >> n >> r;

    cout << "sum upto " << n << " is :: " << printSum(n) << endl;
    cout << "factoraial upto " << n << " is :: " << fact(n) << endl;
    cout << "Binomial is :: " << binomial(n, r) << endl;

    int num;
    cout << "Enter another number :: ";
    cin >> num;
    cout << "sum of digits is :: " << sumOfdigits(num) << endl;

    return 0;
}