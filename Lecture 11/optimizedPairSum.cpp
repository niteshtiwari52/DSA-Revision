#include <vector>
#include <iostream>

using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];

        // case -1  pairSum
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2,7,11,15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    // print  ans
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}