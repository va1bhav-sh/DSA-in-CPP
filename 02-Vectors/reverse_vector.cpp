#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& v){
    int start=0;
    int end=v.size()-1;

    while (start<end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    
}
int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    reverseVector(v);
    for ( int val:v)
    {
        cout << val << " ";
    }
    
    return 0;
}