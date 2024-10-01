#include <vector>
#include <iostream>

using namespace std;
vector<int> pairSum(vector<int> vec, int target)
{
    vector<int> ans;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == target)
            {
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 5;
    vector<int> ans = pairSum(vec, target);
    // print  ans
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}