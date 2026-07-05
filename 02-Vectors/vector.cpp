#include <iostream>
#include <vector>// Vector Headerfile

using namespace std;

int main() {
    //vector<int> vec={1,2,3}; //3
    vector<int> vec(5,0);
    for (int val : vec )
    {
        cout << val << endl;
    }
    
    cout << vec[0];
    return 0;
}