#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int sumOfCubes = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumOfCubes += (digit * digit * digit);
        n /= 10;
    }
    return sumOfCubes == original;
}
int main()
{
    int n=371;
    if (isArmstrong(n))
    {
        cout << "Is an armstrong number";
    }
    else
    {
        cout << "Not an armstrong number";
    }
    return 0;
}