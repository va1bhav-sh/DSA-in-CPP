//Brute Force Approach o(nlogn)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortArray(vector<int>& arr){
    sort(arr.begin(),arr.end());
}
int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    sortArray(arr);
    for (int value:arr)
    {
        cout<<value<<" ";
    }
    

    return 0;
}