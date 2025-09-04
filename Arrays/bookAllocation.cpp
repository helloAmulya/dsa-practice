#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxPages)
{
    int stu = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxPages)
            return false;

        if (pages + arr[i] > maxPages)
        {
            stu++;
            pages = arr[i];
            if (stu > m)
                return false;
        }
        else
        {
            pages += arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;

    int sum = 0, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }

    int s = mx, e = sum;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isValid(arr, n, m, mid))
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
    vector<int> arr = {2, 1, 3, 4};
    int n = arr.size(), m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}
