// You must find the factorial of a given number n

#include<iostream>
using namespace std;
int total=1;
void fact(int n){
    if(n==0){
        cout<<total<<endl;
        return;
    }
    total=total*n;
    fact(n-1);
}
int main(){

    int n;
    cin>>n;
    fact(n);





    return 0;

}