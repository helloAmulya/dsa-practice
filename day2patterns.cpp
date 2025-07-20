#include <iostream>
using namespace std;

int main()
{

    // hollow diamond patter
    /*
        this can be divided into  parts top and bottom,
        later on divided in 3 parts - space/star/space

        combination of space decreasingg reverse pattern, then target spaces in the middle and then the space increasing pattern
        (to complex to understand , see the execution)

    */
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "hollow diamond pattern : " << endl;

    // top part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << ('*');

        if (i != 0)
        {
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << " ";
            }
            cout << ('*');
        }

        cout << endl;
    }

    // bottom part
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << ('*');

        if (i != n - 2)
        {

            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << ('*');
        }
        cout << endl;
    }

    return 0;
}