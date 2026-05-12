#include<iostream>
using namespace std;
/*
Write a Program that:
1. Asks the user to enter their favorite number (between 1 and 100).
2. Reads the input from the console.
3. Displays a message saying, “Amazing!! That’s my favorite number too!”
*/
int main(){
    int num;
    cout<<"Enter your favorite number between 1 and 100: "<<endl;
    cin>>num;
    cout<<"Amazing!! That’s my favorite number "<<num<<" too!"<<"\n";
    return 0;
}