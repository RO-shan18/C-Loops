/* Programmer =  Roshan Mehra
Purpose = Q8 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.
Date = 29/10/2022  */

#include<iostream>
using namespace std;

int main(){
    int number=3;
    int count;
    int n;
    cout<<"Enter the no. of lines: "<<endl;
    cin>>n;

  for(int i=0; i<n; i++){

    for(int j=0; j<n-i-1; j++){
        cout<<" ";
    }

    for(int j=0; j<=i; j++){
      if(i==0){
        cout<<"2";
      }
      else if(i>0){
        for(int i=number; ; i++){
          count=0;
          for(int j=2; j<number; j++){
            if(i%j==0){
              count++;
            } 
          }

          if(count==0){
            cout<<i<<" ";
            number = i+1;
            break;
          }
        } 
      }
    }
    cout<<endl;
  }
     return 0;
}