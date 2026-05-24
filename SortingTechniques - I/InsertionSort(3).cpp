// SO in this technique you basically take an element from first compare it and swap 
// Everytime u swap alwasy u compare it to the previous element and check if its swappable 
// Do till u find the right position for the element and then place it there

#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main(){
    
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);


    insertionSort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


// Time Complexity of worst and average case is O(n^2) 
// For the best case it is O(n)  when the given array is already sorted 

