// Check if given string is pallindrome or not using reccursion

#include <iostream>
using namespace std;

void pallindrome(string s, int left, int right){
    if(left>right){
        cout<<"Pallindrome";
        return;
    }
    else if(s[left]!=s[right]){
        cout<<"Not a pallindrome";
        return;
    }
    else{
        pallindrome(s,left+1,right-1);
    }
}


int main(){

    string s="madam";
    int n=s.length();
    int left=0;
    int right=n-1;

    pallindrome(s,left,right);



    return 0;
}