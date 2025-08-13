#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binform = n;
    if (n < 0)
    {
        x = 1 / x;
        binform = -binform;
    }
    double ans = 1;

    while (binform > 0)
    {
        if (binform % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    return ans;
}

int main()
{
    // binary exponentiation
    // ques : calculate pow of x
    cout << "The ans is :: " << myPow(2, 10) << endl;
    ;

    // ques : best time to buy and sell stock

    // complexity is O(n)
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxprofit = 0;
    // let me first assign the best day to buy the stock be the first day
    int bestbuy = arr[0];

    for (int i = 1; i < n; i++)
    {
        // now if the index of array is greater than the best buy day we calculate the maximum of them
        /*   consider the i as 1, now arr[1] == 1, since bestbuy == 7 as arr[0]
        (we no buy on the second day and sell at first)
        now, maxprofit will be maximum of those two = max(0,1-7) => maxprofit = 0;
        now after if, the bestbuy = min(7,1) => bestbuy = 1;
        this goes on and we keep comparing and replacing the max pro and bestbuy on arr[4] => we get max profit of 5 and return.
        also once we get the bestbuy as 1, for this particular code its value is not going to change

        */
        if (arr[i] > bestbuy)
        {
            maxprofit = max(maxprofit, arr[i] - bestbuy);
        }
        bestbuy = min(bestbuy, arr[i]);
    }
    cout << "bestbuy is at " << bestbuy << " & profit is " << maxprofit << endl;

    return 0;
}