#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        this ques means that return the array as each elemen be product of rest of the elements
        ex - [1,2,3,4], then return as [24,12,8,6] which is [(1*2*3*4),(1*3*4)....so on]
        quite simple if we use bruteforce like we can use two loops but be optmized
    */

    vector<int> nums = {1, 2, 3, 4};

    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Suffix
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    // return ans;
    return 0;

    // cout << "the returned array :: " << ans << endl;
}