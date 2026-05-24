// Selection sort is basically selecting minimums
// Baisc rule si select minimum and swaps 

// Ex: Basically get them minimum and swap 
// 5 4 3 2 1 Step 1
// 1 4 3 2 5 Step 2
// 1 2 3 4 5 Step 3


#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;;
            }
        }
        swap(arr[i],arr[mini]);
    }

}

int main(){


    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}

// Time Complexity is 0(N^2) and space complexity is 0(1) because we are not using any extra space.
// This is beacause every time it enters loop we are itterating from 0 - n-1 and then 1 to n-1 and so on.
// Each time its getting 1 less so its like n+n-1+n-2.... so its sum of n natural numbers which is n(n+1)/2 so its 0(N^2) and space complexity is 0(1) because we are not using any extra space.

