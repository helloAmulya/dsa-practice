#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int ans = n * (n + 1) / 2;
    cout << ans;

    // recurrece relation , recursion -> O(n)
    // total number of recursive calls -> recursive tree for calculating the complexity


    // question : O(n^(1/2)) vs O(n) , O(n^(1/2)) vs O(log n), which is bigger time complexity

    // ans : 1-> O(n^(1/2)) since this is half of the o(n) and the number of operations will be reduced
    // 2. O(log n), because of the logarithmic function

    // no loop then time complexity is constant for here O(1)

    // linear time complexity
    // depending on a fixed number of running . Ex - kadane's algo O(n)

    // swap and bubble sort have general complexities of -> O(n^2)/O(n^3)

    // binary search has O(log n) , closes to constant and very optimized and most preferred

    //  sortings have O(nlog n) and also in greedy algos 
    // O(n!) is very worst , mainly found in the factorial 


    // space complexity can be defined as the SC = hight of the call stack * memory in each call




    return 0;
}