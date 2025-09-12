#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &nums, int n, int c, int mid)
{
    int cows = 1;
    int lastStallPos = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] - lastStallPos >= mid)
        {
            cows++;
            lastStallPos = nums[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}

int CowCheck(vector<int> &nums, int n, int c)
{
    sort(nums.begin(), nums.end());

    int s = 0, e = nums[n - 1] - nums[0]; // the largest minimum distance
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(nums, n, c, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 8, 4, 9};
    int n = 5;
    int c = 3;

    cout << "The answer is possible :: " << CowCheck(nums, n, c) << endl;
    return 0;
    return 0;
}
