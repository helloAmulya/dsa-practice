#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;

    for (int i : nums)
    {
        ans ^= i; // checks bit and if same bit returns 0
    }
    return ans;
}

void reverseVector(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s < e)
    {
        swap(nums[s++], nums[e--]);
    }
}

int main()
{

    // vector basics
    vector<int> vec1(5, 0); // size and value at index
    vector<int> vec = {1, 234, 55, 5};
    cout << vec1[0] << endl;
    cout << "printing all vector values :: ";
    for (int i : vec) // for - each loop
    {
        cout << i << endl;
    }

    cout << "size vec1 : " << vec1.size() << endl;
    vec1.push_back(7);
    // cout << "size after push : " << vec1.size() << endl;
    // vec1.pop_back(); // deletes the last element
    vec1.front(); // get the value at front ( starting position)
    vec1.back();  // get the value at back ( last position)

    //  static vs dynamic memory
    /*
    static memory :
    1. allocated at compile time
    2. uses stack memory
    3. (ex - arrays)

    dynamic memory :
    1. is at run time
    2. uses heap memory
    3. (ex - arrays)
    */

    // cout<< "capacity vec1 : " << vec1.capacity() << endl;

    vector<int> nums = {22, 22, 334, 334, 2};
    cout << "single occuence :: " << singleNumber(nums) << endl;

    // linear search in vector
    int key = 2;
    int pos = -1;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == key)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "The value " << key << " found at position : " << pos << endl;
    else
        cout << "The value " << key << " was not found " << endl;

    vector<int> nums2 = {1, 2, 3, 4, 5};

    reverseVector(nums2); 

    cout << "Reversed vector: ";
    for (int i : nums2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
    return 0;
}