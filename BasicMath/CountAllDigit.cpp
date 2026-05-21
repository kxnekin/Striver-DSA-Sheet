// You need ti return thhe total number of digits in the given number n.
// Ex 151 -> 3

#include <iostream>
using namespace std;
int main(){

    int n=1002;
    int count=0;

    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count;



    return 0;
}

// TC - O(log(n)) where n is the given number.