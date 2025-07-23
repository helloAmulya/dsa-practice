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

    // for (int i = 0; i <= n; i++)
    // {

    //     ans += rem * (10 ^ i);
    // }
}

int main()
{

    // Binary number system

    // 1. decimal to binary : front to back and back to front number display

    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "decimal to binary series :: ";
    for (int i = 0; i <= n; i++)
    {
        cout << tobinary(i) << endl;
    }
    cout << "single term :: " << tobinary(n) << endl;

    return 0;
}