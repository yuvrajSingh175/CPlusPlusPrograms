//Written by Yuvraj Singh(@yuvrajSingh175)

//Functions in C++
// Function can be defined as a block of code that will only run when it is called.
//They are used for reusing a code.

#include<iostream>
using namespace std;

//Creating a function...syntax: datatype functionName(parameters){ code }

void myFunction(){                                 //function declaration
    cout<<"myFunction is called "<<endl;          //function definition
}

int main(){
    cout<<"myFunction is not called yet. "<<endl;
    myFunction();                                  //calling the function
    //the function can be called as many times as you want.
    myFunction();
    myFunction();

    return 0;
}
