//Written by Yuvraj Singh(@yuvrajSingh175)
//This program is about Strings... Strings are used for storing text

#include<iostream>
#include<string>    //Including the string library

using namespace std;

int main(){
    string lang = "Python";         //this is a string

// Concatenation
    string firstName = "Bruce";
    string lastName = "Wayne";
    string fullName = firstName + lastName;

    cout<<"Full name is "<<fullName<<endl;

//Appending
    string apndName = firstName.append(lastName);
    cout<<"Appended name is "<<apndName<<endl;

//String length
    cout<<"The length of fullName is "<<fullName.length()<<endl;

//User Input Strings
    string game;
    cout<<"Type your favourite game's name: ";
    getline(cin, game);
    cout<<"Your favourite game is : "<<game<<endl;

    return 0;

}
