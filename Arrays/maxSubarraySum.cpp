#include <iostream>
using namespace std;

int main()
{

    //  consider a array arr[]  = {1,2,3,5,4,7,8,6};
    /*
        if any array is of size n, then the total no. of subarrays
        is equal to: (n*(n+1))/2
    */

    int arr[] = {1, 2, 3, 5, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = INT_MIN;

    // kadanes ALgorithm
    /*
        this algo says that do not add a negative number to the sum i.e. if the sum becomes less than 0 then reset the sum to 0
    */

    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        
    }
    cout <<"The max subarrray is : " << maxSum << endl;

    // to get max subarray sum, we can use 1. the bruteforce method
    // just calculate the the present subarray sum and keep adding the the element
    // for (int st = 0; st < n; st++)
    // {
    //     int currentSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currentSum += arr[end];
    //         // this approach is bruteforce and complexity is O(n^2);
    //         cout<<currentSum<<endl;
    //         // for (int i = st; i <= end; i++)
    //         // {
    //         //     cout << arr[i];
    //         // }
    //         // cout << " ";
    //         maxSum = max(currentSum,maxSum);
    //     }
    //     cout<<"max subarry is: "<<maxSum<<endl;
    //     // cout << endl;
    // }

    return 0;
}