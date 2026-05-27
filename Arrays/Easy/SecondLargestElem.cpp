#include<iostream>
#include<climits>
using namespace std;
int main(){


    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int firstLargest=arr[0];
    int secondLargest=INT_MIN;

    for(int i=1;i<n;i++){
        if(arr[i]>firstLargest){
            secondLargest=firstLargest;
            firstLargest=arr[i];
        }
        else if(arr[i]<firstLargest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }

    }
    if(secondLargest==INT_MIN){
        cout<<"No second largest element";
    }
    else{
        cout<<"Second largest element is "<<secondLargest;
    }
        




    return 0;
}