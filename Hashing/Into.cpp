// This has full basics of hashing

// Lets say your are given an array and u have to find how many times the no appears 
// Brute force

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={1,2,3,4,4,5,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int num=4;
//     int count=0;

//     for(int i=0;i<n;i++){
//         if(arr[i]==num){
//             count++;
//         }
//     }
//     cout<<num<<" appears "<<count<<" times in the array."<<endl;


//     return 0;
// }


// Hashing is called prestore/fetching

// Now lets solve it using hashing technique very important 

// #include<iostream>
// using  namespace std;
// int main(){

//     int arr[]={1,2,3,4,4,5,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int hash[13]={0};

//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     int num;
//     cin>>num;
//     cout<<num<<" appears "<<hash[num]<<" times in the array."<<endl;

//     return 0;
// }



// Inside main function tghe max arr u can declare is only 19^6
// It will give segmentaion falt
// If declared globally 10^7


// This same thing can be doen for character also 

// Character hashing

#include<iostream>
using namespace std;
int main(){

    string s="abcdeff";

    int hash[26]={0};

    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
    }

    char letter;
    cin>>letter;

    cout<<letter<<"Appeared"<<hash[letter-'a']<<"times in the string."<<endl;



    return 0;
}