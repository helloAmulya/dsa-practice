#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binSearch(vector<int>& nums, int target) {

        int s = 0;
        int e = nums.size() - 1;
        sort(nums.begin(), nums.end());
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return -1;
    }

int main()
{
    vector<int> nums = {3, 434, 5542, 52, 15, 21, 4, 55, 2, 6, 8, 15};
    int target;
    cout << "Enter number to search :: ";
    cin >> target;
    cout << "The target is found at location :: " << binSearch(nums, target) << endl;

    return 0;
}
