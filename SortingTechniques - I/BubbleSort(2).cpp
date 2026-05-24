// This sorting algorithm works on adjacent swapping.
// In this after 1 round u get the last element in the correct position.


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
   for(int i=n-1;i>=0;i--){
    bool swapped = false;
    for(int j=0;j<=i-1;j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j+1], arr[j]);
            swapped = true;
        }
    }
    if(swapped == false){
        break;
    }
   }
}

int main(){

    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}

// Time Complexity 
// Worst complexxity or average complexity is O(n^2) and this explanation is similar to selection sort one (sum of n natural no)
// Best time is O(n) when array is already sorted. You do not need any swaps.
// But inorder to get this u must add the speciall condition of bool swapped / not swapped 

// So best time is O(N) and worst time is O(N^2)/AVERAGE TIME IS O(N^2)

