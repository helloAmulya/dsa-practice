#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> majEl(vector<int> nums)
{

    // using moore algorithm
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 2, 2, 2, 2, 3, 4, 3, 7, 8, 3, 7, 2, 6, 6, 4, 4, 4, 6, 9, 1, 5, 1, 4};

    vector<int> ans = majEl(arr);
    if (!ans.empty())
        cout << ans[0] << endl;
    else
        cout << "No majority element" << endl;

    return 0;
}
