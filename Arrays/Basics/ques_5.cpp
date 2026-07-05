//WAF to swap the max & min number of an arry
#include <iostream>
#include <climits>
using namespace std;


int swapMinMax(int arr[],int size){
    int minIndex=0;
    int maxIndex=0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i]<arr[minIndex])
        {
            minIndex=i;
        }
        if (arr[i]>arr[maxIndex])
        {
            maxIndex=i;
        }
        
    }
    swap(arr[minIndex],arr[maxIndex]);
    

}
 
int main() {
    int size=5;
    int arr[]={4,53,54,65,34};
    swapMinMax(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    
   
    
    return 0;
}