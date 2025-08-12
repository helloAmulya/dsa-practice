#include <iostream>
#include <vector>
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

vector<int> pairSumOp(vector<int> arr, int a)
{
    vector<int> ans;
    int s = 0;
    int e = arr.size() - 1;
    int currentSum = 0;
    while (s < e)
    {
        currentSum = arr[s] + arr[e];
        if (currentSum > a)
        {
            e--;
        }
        else if (currentSum < a)
        {
            s++;
        }
        if (currentSum == a)
        {
            ans.push_back(s);
            ans.push_back(e);
            return ans;
        }
    }

    return ans;
}

int main()
{

    int target = 9;
    vector<int> arr = {1, 3, 11, 7, 9, 10, 6, 4, 5};
    int n = arr.size();

    // pair sum using bruteforce
    vector<int> ans = pairSum(arr, target);
    cout << "(" << ans[0] << "," << ans[1] << ")" << endl;
    cout << "op :";

    // pairSum optimized ( only for sorted array)
    vector<int> arr2 = {2, 7, 11, 15};
    vector<int> ans2 = pairSumOp(arr2, target);
    cout << "(" << ans2[0] << "," << ans2[1] << ")" << endl;

    return 0;
}