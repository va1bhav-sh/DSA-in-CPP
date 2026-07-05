//WAF to calculate sum and product of all numbes in an array

#include <iostream>
using namespace std;

int sumArray(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i]; 
    }
    return sum;
    
}

int productArray(int arr[],int size){
    int product=1;
    for (int i = 0; i < size; i++)
    {
        product*=arr[i];
    }
    return product;
    
}

int main() {
    
    int arr[]={1,3,4};
    int size=3;
    cout << sumArray(arr,size) << endl;
    cout << productArray(arr,size) << endl;
    return 0;
}