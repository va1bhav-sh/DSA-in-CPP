// WAF to print all unique values in an array
#include <iostream>
using namespace std;
void printUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count == 1)
            {
                cout << arr[i] << " ";
            }
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7;

    printUnique(arr, n);
    return 0;
}