#include <iostream>
using namespace std;
// Print numbers N to 1
void printNums(int n){
    if (n==0)
    {
        return;
    }
    cout<< n << " ";
    printNums(n-1);
    
}
int main() {
    int n =4;
    printNums(n);    
    return 0;
}