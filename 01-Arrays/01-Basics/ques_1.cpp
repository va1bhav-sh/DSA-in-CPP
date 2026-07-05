//Find smallestlargest in array
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size=5;
    int nums[]={4,53,54,65,34};
    int smallest= INT_MAX;//+infinity
    for (int i = 0; i <size ; i++)
    {
        if (nums[i]<smallest)
        {
            smallest=nums[i];
        }
        // OR smallest=min(nums[i],smallest);
    }
    cout << smallest;
    return 0;
}