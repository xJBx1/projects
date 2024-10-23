#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};   
    vector<int> vector;
    cout << "Size: " << vec.size() << endl;
    vector.push_back(5);

    cout << "Size: " << vector.size() << endl;
    vector.push_back(55);

    cout << "Size: " << vector.size() << endl;
    vector.pop_back();

    cout << "Size: " << vector.size() << endl;
    
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(4);
    return 0;
}

