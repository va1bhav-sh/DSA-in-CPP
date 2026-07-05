#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;

    cout << "size=" <<vec.size()<<endl;

    vec.push_back(25);
    vec.push_back(34);
    vec.push_back(25);
    cout << "size=" <<vec.size()<<endl;

    vec.pop_back();//45


    cout << vec.front()<< endl;
    cout << vec.back()<< endl;

    cout << vec.at(1 )<<endl;
    
    return 0;
}