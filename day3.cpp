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

int main()
{
    // functions basics

    int n;
    cout << "Enter a number :: ";
    cin >> n;

    cout << "sum is :: " << printSum(n) << endl;
    cout << "factoraial upto " << n << "is :: " << fact(n) << endl;
    return 0;
}