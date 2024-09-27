/**
 * Vectors in C++
 */

// Problem :
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // method 1
    vector<int> vec;
    // cout << vec[0];

    vector<int> vec2 = {1, 2, 3};

    // method 3 - (size of array , value at each index)
    vector<int> vec3(5, 0);

    

    // Traversin --> by using for each loop
    for (int i : vec2)
    {
        cout << i << endl;
    }

    return 0;
}