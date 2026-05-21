// You must find sum of first n numbers using recursion.

#include<iostream>
using namespace std;
int total=0;
void sum(int i, int n){
    
    if(i>n){
        cout<<total;
        return;
    }
    total=total+i;
    sum(i+1,n);
}
int main(){

    int n;
    cin>>n;

        sum(1,n);
    return 0;
}