// Problem :
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSubArrSum(int arr[], int n)
{

    int maxSum = INT_MIN;

    // hamare paas me O(n^3) brute force approach hai but here we can optimize little but to O(n^2)

    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;
        for (int end = start; end < n; end++)
        {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }
    return maxSum;
}
int main()
{

    int n;
    cin >> n;

    int arr[100] = {0};

    // input to the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // function calling
    cout << maxSubArrSum(arr, n);

    return 0;
}