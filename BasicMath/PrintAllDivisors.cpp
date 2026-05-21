// You must print all divisors of given number n in increasing order.
//  The input consists of a single integer n (1 ≤ n ≤ 10^6).

#include <iostream>
using namespace std;
int main(){

    int n=12;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

    return 0;
}