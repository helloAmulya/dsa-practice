#include <iostream>
using namespace std;

int main()
{

    // number pattern increasing order

    int n;
    cout << "enter a number : ";
    cin >> n;

    // cout << "number pattern : " << endl;
    // for (int i = 1; i <= 7; i++)
    // int num = 1;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // similar based alphabet problem
    cout << "alphabet pattern : " << endl;

    int num = 65;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num >= 65 && num <= 98)
            {
                cout << char(num) << " ";
                num++;
            }
        }
        cout << endl;
    }

    // just a change of cout statements and the output is different

    //  increasing number patter line wise

    cout << "increasing number patter line wise: " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    // increasing number patter column wise
    cout << "column wise: " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // reverse triangle pattern
    cout << "reverse triangle pattern: " << endl;

    int num2 = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}