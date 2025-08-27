#include <iostream>
using namespace std;

// search in a rotate sorted array
int RotateSearch(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        if (nums[s] == target)
        {
            return s;
        }
        else
        {
            s++;
        }
    }
    return -1;
}

int MoreOpt(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[s] <= nums[mid])
        {
            if (nums[s] <= target && target < nums[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}



int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target;
    cout << "Enter number to search :: ";
    cin >> target;

    cout << "the value is found at index :: " << RotateSearch(nums, target) << endl;
    cout << "Optmised Sol :: " << MoreOpt(nums, target) << endl;

    return 0;
}
