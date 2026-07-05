//Smallest and largest index array
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size=5;
    int num[]={22,44,23,45,56};
    int smallest=INT_MAX;
    int largest=INT_MIN;

    int smallIndex=-1;
    int largeIndex=-1;

    for (int i = 0; i < size; i++)
    {
        if (num[i]<smallest)
        {
            smallest=num[i];
            smallIndex=i;
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        if (num[i]>largest)
        {
            largest=num[i];
            largeIndex=i;
        }
        
    }
    
    cout << "Smallest Number:" << smallest << " Index:" << smallIndex << endl;
    cout << "Largest Number:" << largest << " Index:" << largeIndex << endl;
    
    return 0;
}