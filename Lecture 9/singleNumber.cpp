// Problem :  Single Number
#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int> &A)
{

    int ans = 0;

    for (int i : A)
    {
        ans = ans ^ A[i];
    }
    return ans;
}
int main()
{
    vector<int> nums;
    int size, element;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        nums.push_back(element);
    }

    cout << singleNumber(nums);

    return 0;
}