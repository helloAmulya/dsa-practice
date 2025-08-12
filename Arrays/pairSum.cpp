#include <iostream>
using namespace std;

vector<int> pairSum(vector<int> arr, int a)
{
    vector<int> ans;
    int currentSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i; j < arr.size(); j++)
        {
            currentSum = arr[i] + arr[j];
            if (currentSum == a)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{

    // pair sum using bruteforce

    int target = 9;
    vector<int> arr = {1, 3, 11, 7, 9, 10, 6, 4, 5};
    int n = arr.size();

    vector<int> ans = pairSum(arr, target);
    cout << "(" << ans[0] << "," << ans[1] << ")" << endl;

    return 0;
}