// Optimal (Dutch National Flag Algorithm)#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortColor(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] ==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    sortColor(arr);

    cout << "Sorted Array: ";
    for (int value : arr)
    {
        cout << value << " ";
    }

    return 0;
}