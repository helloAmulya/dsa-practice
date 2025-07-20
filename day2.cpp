#include <iostream>
using namespace std;

// important pattern problems (very useful)

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

    cout << "increasing number line wise: " << endl;

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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // floyds triangle pattern
    // the way is to print the outer loop normally (i upto n) , the inner loop to i+1 , then print the
    //  number to update
    int num2 = 1;
    cout << "floyds triangle pattern: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num2 << " ";
            num2++;
        }
        cout << endl;
    }

    // inverted triangle pattern
    cout << "inverted decreasing pattern: " << endl;

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // space decreassing reverse
    cout << "space decreasing pattern: " << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // space increasing pattern
    cout << "space increasing pattern: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {

            cout << (i + 1);
        }
        cout << endl;
    }

    // complex pattern 
    cout << "complex patterns: " << endl;

    for (int i = 0; i < n; i++)
    {

        // this prints the spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // this prints the reverse column wise pattern
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // this prints the reverse trianlge pattern
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}