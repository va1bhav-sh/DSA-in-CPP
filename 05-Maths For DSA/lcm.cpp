#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int lcm(int a,int b){
    int GCD=gcd(a,b);
    return (a*b)/GCD;
}
int main()
{
    cout << gcd(20, 28) <<endl;
    cout << lcm(20,28);
    return 0;
}