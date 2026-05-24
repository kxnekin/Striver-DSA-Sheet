// Take input and print name n times

#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n){
        return;
    }
    else{
        cout<<"Your Name"<<endl;
        print(i+1,n);
    }
}
int main(){

    int n;
    cin>>n;

    print(1,n);




    return 0;
}

// TC - O(n)
// SC - O(n) stack space used 

