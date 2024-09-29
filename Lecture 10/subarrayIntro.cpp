/**
 *  subarray- > a continoius part of an array.
 *  for eg [ 1,2,3,4,5]
 *      n = 5 ;
 *  subarray would be :
 *     1, 2, 3, 4, 5 --> [5 subarray]
 *     12, 23, 34, 45 --> [4 subarray]
 *     123, 234, 345 --> [3 subarray]
 *     1234, 2345 --> [2 subarray]
 *      12345 --> [1 subarray]
 *
 *
 * Note: for an array of size n, we have total subarray = n *(n+1) / 2
 */

// Problem :
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}