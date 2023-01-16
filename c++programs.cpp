//This Program is written by Yuvraj Singh(@yuvrajSingh175)
//This covers the basic concepts that a beginner need to know when starting c++
//Just Remove the multi line comments(remove the "/* and */") from the code segments and you're good to go :)

#include<iostream>      //Pre processor command
using namespace std;

int main(){             //main function

/*
//First Program
    cout<<"Hello World"<<endl;      //cout prints output in console

*/

/*
//Input Output
    int a, b;       //variable declaration
    cout<<"Enter First Number"<<endl;
    cin>>a;             //cin input and store variables
    cout<<"Value of number given by you is "<<a<<endl;

    cout<<"Enter Second Number"<<endl;
    cin>>b;             
    cout<<"Value of number given by you is "<<b<<endl;
*/

/*
//If-Else Conditional statements
    if(a<b){
        cout<<"First Number "<<a<<" is smaller than second number "<<b<<endl;
    }
    else if(a>b){
        cout<<"First number "<<a<<" is larger than second number "<<b<<endl;
    }
    else{
        cout<<"Both numbers are equal "<<endl;
    }
*/

/*
//Switch case
    int num;
    cout<<"Enter your case: ";
    cin>>num;
    switch(num){
        case 1:
        cout<<"This is the first case "<<endl;
        break;
        case 2:
        cout<<"This is the second case "<<endl;
        break;
        case 36:
        cout<<"This is case 36 "<<endl;
        break;
        default:
        cout<<"This is the default case "<<endl;
        break;
    }
*/

/*
//Loops
    //this switch case is for different loops
    int L;
    cout<<"Enter 1 for while loop, \nEnter 2 for do-while loop \nEnter 3 for for-loop: "<<endl;
    cin>>L;
    switch(L){
        case 1:{
        int index = 0;
        while(index<5){
            cout<<"We're at index "<<index<<endl;
            index+=1;       //incrementing index by 1... is same as index=index+1;
            }
        }
        break;

        case 2:{     //do while runs the code segment atleast ONCE
        int i=0;
        do{
            cout<<"We are at index "<<i<<endl;
        }while(i>0);    //since i is 0, and our condition requires i to be more than 0...code segment will run just once
        }break;

        case 3:{
            for(int i=0; i<=5;i++){
                cout<<"we are at index "<<i<<endl;
            }
        }
        break;
        default:{
            cout<<"There is no other case than 1, 2, and 3,"<<endl;
        }
        break;
    }
*/    
    return 0;
}

