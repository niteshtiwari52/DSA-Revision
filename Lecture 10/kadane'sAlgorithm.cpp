// Problem :
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSubArrSum(int arr[], int n)
{
    /**
     *  Kadane's Algorithms--> states that ki hame current sum agar negative milta hai to hum apne current sum ko reset kar denge 0 pe. Instead of adding a negtive number in my maximum sum hum use 0 kar denge. Because -ve number overall maxSum ko to negative hi banayega.
     */

    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {

        currSum +=arr[i];
        maxSum = max(currSum, maxSum);
        // agar current sum negative hua to haum use 0 set kar denge
        if (currSum < 0)
        {
            currSum = 0;
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