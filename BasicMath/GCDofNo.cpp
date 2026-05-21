// You must find the GCD of two numbers using the Euclidean algorithm.
// The Euclidean algorithm is based on the principle that the GCD of two numbers also divides their difference.

#include<iostream>
using namespace std;
int main(){

    int n1=48, n2=18;

    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }

        if(n1==0){
            cout<<"GCD is "<<n2;
        }
        else if(n2==0){
            cout<<"GCD is "<<n1;
        }
    }



    return 0;
}

// Time complexity: O(log(min(n1, n2)))
// Space complexity: O(1)