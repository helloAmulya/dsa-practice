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

    return 0;
}