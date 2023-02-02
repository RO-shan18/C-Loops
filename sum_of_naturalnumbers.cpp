/* Programmer =  Roshan Mehra
Purpose = Q3 - Write a program to find the sum of n natural numbers.
Date = 29/10/2022   */

#include<iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int sum = 0;
    
    int i = 1;
    while(i<=num){
        sum += i;
        i++;
    }

    cout<<"Sum of first "<<num<<" natural numbers are: "<<sum;
    return 0;
}