#include <iostream>
#include <vector>
 
using std::cout;
using std::endl;
using std::vector;
 
void PrintVector(const vector<int> &v) {
    bool first = true;
    for(auto n : v) {
        if (!first) {
            cout<< ", ";
        } else {
            first = false;
        }
        cout << n;
 
    }
    cout<<endl;
}
 
int main()
{
    // Create a vector containing integers
    vector<int> v = {7, 5, 16, 8};
 
    cout << "initilized with 4 numbers"<<endl;
    PrintVector(v);
 
    // Add two more integers to vector
    v.emplace_back(25);
    v.emplace_back(13);
    cout << "after 2 more inserted"<<endl;
    PrintVector(v);
 
    //copy of the value inside vector
    for (auto n : v) {
        ++n;
    }
 
    cout << "BUT: after incrementation"<<endl;
    PrintVector(v);
 
    //reference to the value inside vector, therefore one can change the value
    for (auto &n : v) {
        ++n;
    }
    cout << "and again... can you spot the difference?"<<endl;
    PrintVector(v);
}

