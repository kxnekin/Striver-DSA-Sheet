// You must reverse an array using recurssion

#include<iostream>
using namespace std;

void rev(int start,int end,int arr[]){
    if(start>=end){
       return;
    }
    swap(arr[start],arr[end]);
    rev(start+1,end-1,arr);
} 



int main(){

    int arr[]={1,2,3,4,5};
    int n=5;


    int start=0;
    int end=n-1;

    rev(start,end,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}