#include<iostream>
using namespace std;
int main(){


    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 8;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at index: "<<i<<endl;
            break;
        }
        else if(i==n-1){
            cout<<"Element not found in the array."<<endl;
        }

    }

    


    return 0;
}