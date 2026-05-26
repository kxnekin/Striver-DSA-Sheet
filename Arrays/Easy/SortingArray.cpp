#include<iostream>
using namespace std;

int main(){

    int arr[]={1,20,3,4,5};

    bool IsSorted = true;
    int n = sizeof(arr)/sizeof(arr[0]);
    int start=0;

    while(start<n-1){
        if(arr[start]>arr[start+1]){
            IsSorted = false;
            break;
        }
        start++;
    }
    if(IsSorted){
        cout<<"Array is already sorted";
    }
    else{
        cout<<"Array is not sorted";
    }



    return 0;
}