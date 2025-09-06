#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxTime)
{
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= maxTime)
        {
            time = arr[i];
        }
        else
        {
            painters++;
            time += arr[i];
        }
    }
    return painters <= m;
}

int minTime(vector<int> &arr, int n, int m)
{
    int sum = 0, maxVal = INT_MIN;
    //  the answer will lie in minVal and maxVal
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int s = maxVal;
    int e = sum, ans = -1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size();
    int m = 2;
    cout <<"Time taken is :: "<< minTime(arr, n, m) << endl;

    return 0;
}