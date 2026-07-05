//Find largest in arrray
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size=5;
    int nums[]={4,53,54,65,34};
    int largest= INT_MIN;//-infinity
    for (int i = 0; i <size ; i++)
    {
        if (nums[i]>largest)
        {
            largest=nums[i];
        }
        // OR largest=max(nums[i],largest);
    }
    cout << largest;
    return 0;
}