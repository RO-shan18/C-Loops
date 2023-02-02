/* Programmer =  Roshan Mehra
Purpose = Q1 - Write a program to calculate the factorial of a number.
Date = 29/10/2022  */

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the number: "<<endl;
    cin>>num;

    int factorial = 1;

    if(num == 0){
        cout<<"Factorial of a "<<num<<" is: 0";
    }
    else if(num<0){
        cout<<"Factorial of a negative number does not exist";
    }
   else{
    for(int i=1; i<=num; i++){
        factorial = factorial * i;
    }
   }
    cout<<"Factorial of "<<num<<" is: "<<factorial;

    return 0;
}