// Problem :
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;

    cout << "size: " << vec.size() << endl;

    // push_back() --> to insert an element into vector at the end.
    cout << "pushing 1.... " << endl;
    vec.push_back(1);
    cout << "pushing 2.... " << endl;
    vec.push_back(2);
    cout << "pushing 3.... " << endl;
    vec.push_back(3);

    cout << "size after push_back: " << vec.size() << endl;

    // pop_back() --> to delete an element from last.
    vec.pop_back();

    cout << "size after pop_back: " << vec.size() << endl;


    // front() --> to get first value ;
    // back () --> to get last value;
    // at() --> to get value at particular index.
    
    cout<< "front(): " << vec.front()<<endl;
    cout<< "back(): " << vec.back()<<endl;
    cout<< "at(): " << vec.at(0)<<endl;


    return 0;
}