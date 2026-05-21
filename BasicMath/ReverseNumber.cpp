// GivEN A NUMBER AND U MUST REVERSE IT 

#include <iostream>
using namespace std;
int main(){

    int n=7789;
    int rev=0;
    int lastdigit;

    while(n!=0){
        lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }

    cout<<"Reverse of the number is "<<rev<<endl;





    return 0;
}