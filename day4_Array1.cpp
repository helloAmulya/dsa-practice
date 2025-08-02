#include <array>
#include <iostream>
using namespace std;

// Array lecture 1

int main()
{

    // finding smallest & largest in an array

    int smallest = INT_MAX;
    int greatest = INT_MIN;
    int arr[] = {342, 54, 35656, 56356, 4645442, 2, 32212, 2322};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > greatest)
            greatest = arr[i];
    }
    cout << "the smallest is :: " << smallest << endl;
    cout << "the greatest is :: " << greatest << endl;

    //  pass by reference, we pass the address i.e. real value

    // linear search

    int target = 2;
    bool found = false; // to check

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == target)
        {
            cout << "The value is found in array at : " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "The value not found" << endl;
    }

    //  arrray reversal (using two pointer approach)

    int s = 0;
    int e = len - 1;

    while (s < e)
    {
        // swap(arr[s], arr[e]);
        // s++;
        // e--;
        swap(arr[s++], arr[e--]);
    }
    cout << "Reversed array : ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sum & product of all numbers

    int sum = 0;
    long long prod = 1; // do not initialise like prod = 0
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "sum is :: " << sum << endl;
    cout << "product is :: " << prod << endl;

    //  swap min max of arr

    cout << "swapped array : ";

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == smallest)
        {
            arr[i] = greatest;
        }
        else if (arr[i] == greatest)
        {
            arr[i] = smallest;
        }
        // swap(arr[i],greatest)
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}