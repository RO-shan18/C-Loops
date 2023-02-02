/* Programmer =  Roshan Mehra
Purpose = Q4 - Write a program to reverse a given integer number.
Date = 29/10/2022   */

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int reverse = 0;
    while(num!=0){
        int digit = num%10;
        reverse = (reverse * 10) + digit; 
        num = num/10;
    }

    cout<<"Reverse of a number: "<<reverse;

    return 0;
}