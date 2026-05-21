// You must check pallindrome or not

#include <iostream>
using namespace std;
int main(){


    int n=121;
    int temp=n;
    int rev=0;
    int lastdigit;

    while(n!=0){
        lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }

    if(temp==rev){
        cout<<"Pallindrome number"<<endl;
    }
    else{
        cout<<"Not a pallindrome number"<<endl;
    }


    return 0;
}