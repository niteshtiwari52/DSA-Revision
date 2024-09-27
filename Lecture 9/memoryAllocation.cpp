/**
 *   -- 2 types of memory Allocation 
 *      static --> ye compile time me allocate ho jaati hai
 *       int arr[5] ; // static memory allocation
 * 
 *      Dynamic --> ye run time me allocate hoti hai. 
 *      vector<int> vec ; // dynamic memory allocation. 
 * 
 *  -- memory are of 2 types  
 *         1. Static memory 
 *        2. Heap Memory
 *  
 *  
 */

//Problem : 
#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    
    
    return 0;
}