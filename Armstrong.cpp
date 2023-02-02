/* Programmer =  Roshan Mehra
Purpose = Q2 - Write a program to print all Armstrong numbers between 100 to 500.
Date = 29/10/2022  */

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    

   for(int i=0; i<500; i++){
   int sum = 0;
    
    for(int j=i; j!=0; j=j/10){
        int digit = j%10;
        sum = sum + (digit * digit * digit);
    }

    if(sum == i){
        cout<<i<<endl;
    }
   }
    return 0;
}


   