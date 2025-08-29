#include <iostream>
#include <vector>
using namespace std;

/*
    Problem Description : sorted array, only integers, every element appears Exactly Twice,  one element appears exactly once.
*/

// the array is already sorted, we can apply the binary search directly, also this will only work for twice occuring, if anything appears 3 times or more, it will break
int SingleDuplicateBinary(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (mid % 2 == 1)
            mid--;

        if (nums[mid] == nums[mid + 1])
        {
            s = mid + 2;
        }
        else
        {
            e = mid;
        }
    }
    return nums[s];
}

// the below solution is correct but the time complexity will not be O(log n)
// int singleNonDuplicate(vector<int> &nums)
// {
//     int n = nums.size();
//     int s = 0;
//     while (s < n - 1)
//     {
//         if (nums[s] != nums[s + 1]) // this will exceed the heap buffer
//         {
//             return nums[s];
//         }
//         s += 2;
//     }
//     return nums[n - 1];
// }
//

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 7, 8, 8};
    // cout << "The Single Element is :: " << singleNonDuplicate(nums) << endl;
    cout << "The Single Element is :: " << SingleDuplicateBinary(nums) << endl;
    return 0;
}
