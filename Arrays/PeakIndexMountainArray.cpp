#include <iostream>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int peakEle = INT_MIN;
    while (s < e)
    {
        if (arr[s] > arr[s + 1])
        {
            return s;
        }
        else
        {
            s++;
        }
    }
    return s;
}

int main()
{
    vector<int> arr = {24, 69, 100, 99, 79, 7};
    cout << "peak index is : " << peakIndexInMountainArray(arr) <<" & element is :: "<< arr[peakIndexInMountainArray(arr)] << endl;

    return 0;
}