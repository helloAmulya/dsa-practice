#include <iostream>
using namespace std;

int main()
{

    //  to solve this question we need to use two approaches

    // 1. brute force
    /*
        in this we will assign the left boundary and iterate te right one and keep comparing the result, later after first iteration of the left one, we shift it to another index like if arr[0] then to arr[1], and then again we iterate the right boundary till the end and record the data. This will extensive

    */

    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);
    int maxArea = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int width = j - i;
    //         int ht = min(height[i], height[j]);
    //         int calArea = width * ht;
    //         maxArea = max(maxArea, calArea);
    //     }
    // }
    // cout << maxArea << endl;

    // 2. optimised approach
    int s = 0, e = n - 1;
    //  this we have used two pointer approach, due to complexity of O(n) sinlge loop, as in brute force the TLE will come O(n^2)

    // we know the width, calculate the minimum of the height of both points as the smaller one decides the area of the water
    while (s < e)
    {
        int width = e - s;
        int ht = min(height[s], height[e]);
        int calArea = width * ht;
        maxArea = max(maxArea, calArea);
        height[s] < height[e] ? s++ : e--;
    }
    cout << maxArea << endl;
}
