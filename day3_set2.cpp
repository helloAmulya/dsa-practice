#include <iostream>
using namespace std;

int tobinary(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;

    //  can also be done using for loop but while is more easy to implement
}

int todecimal(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 10; // just a change of logic , replace 2 by 10 in the decimal to binary
        n /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    return ans;
}

int main()
{

    // Binary number system

    // 1. decimal to binary : front to back and back to front number display

    int n, num;
    cout << "Enter a number : ";
    cin >> n;

    cout << "decimal to binary series :: ";
    for (int i = 0; i <= n; i++)
    {
        cout << tobinary(i) << endl;
    }
    cout << "single term :: " << tobinary(n) << endl;
    cout << "Enter a binary number :: ";
    cin >> num;
    cout << "binary to decimal " << todecimal(num) << endl;

    return 0;
}