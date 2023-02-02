/* Programmer =  Roshan Mehra
Purpose = Q5 - Write a program to print the cross pattern given below (in the shape of X):
Date = 29/10/2022  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){

            if(i==j || i+j==n-1){
                cout<<"*";
            } 
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}