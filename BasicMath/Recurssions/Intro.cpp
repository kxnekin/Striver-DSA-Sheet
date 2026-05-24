// This is  the basics of recurssion and you have to get nastery in it
// Recursion is basically a function calling itself until it reaches a base case
// If youd ont keep stopping condition it will lead to infinite recursion
// Stack Overflow error : When a function calls itself too many times without a base case, it can lead to a stack overflow error. 
// This happens because each function call uses up some of the stack memory, and if there are too many calls, the stack can run out of memory.
//  To avoid this, it's important to ensure that your recursive functions have a well-defined base case that will eventually be reached.

#include <iostream>
using namespace std;
int count = 0;
void counter(){
    if(count < 5){
        cout << count << endl;
        count++;
        counter(); // Recursive call
    }
}
int main(){

  
    counter();


    return 0;
}