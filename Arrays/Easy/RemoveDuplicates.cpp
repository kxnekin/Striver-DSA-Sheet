#include<iostream>
#include<vector>
using namespace std;
int main(){


    vector<int> arr={1,1,2,2,2,2,3,3,3,4,4,4,5,6};
    int n = arr.size();

    int start=0;
    int end=n-1;

    while(start<=end){
        if(arr[start]!=arr[end]){
            start++;
            end--;
        }
        else{
            arr.erase(arr.begin()+end);
            end--;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}