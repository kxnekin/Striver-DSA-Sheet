// When you take a number and sum the cubes of its digits, you get the same number.
//  For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
//  Write a C++ program to check if a given number is an Armstrong number or not.

#include <iostream>
using namespace std;
int main(){

    int n=153;
    int sum=0;

    int temp=n;
    int lastdigit;

    while(n!=0){
        lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }

    if(temp==sum){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }



    return 0;
}