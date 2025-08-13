#include <iostream>
using namespace std;

int main()
{
    // binary exponentiation
    // calculate pow of x
    int x = 3, n = 5;
    int binform = n;
    double ans =  1;
    if (n < 0)
    {
        x = 1 / x;
        binform = -binform;
    }

    while (binform > 0)
    {
        if (binform % 2 == 0)
        {
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    cout<<ans;

    return 0;
}