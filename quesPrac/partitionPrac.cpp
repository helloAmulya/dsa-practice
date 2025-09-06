#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            if (painters > m)
                return false;
            time = arr[i];
        }
    }
    return true;
}

int minTimeTaken(vector<int> &arr, int n, int m)
{

    int totalTime = 0, maxTime = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        totalTime += arr[i];
        maxTime = max(maxTime, arr[i]);
    }

    int s = maxTime, e = totalTime;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s; // we will directly return the s, no ans variable needed
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size();
    int m = 2;

    cout << "time to paint :: " << minTimeTaken(arr, n, m) << endl;
    return 0;
}