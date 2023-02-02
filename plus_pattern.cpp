/* Programmer =  Roshan Mehra
Purpose = Q7- Write a program to print + pattern given below :
Date = 29/10/2022   */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){
            if(n%2 == 1){
            if(i==(n/2)+1 || j==(n/2)+1)
                cout<<"*";
            else
                cout<<" ";
          }

          else{
            if(i==(n/2) || j==(n/2) || i==(n/2)+1 || j==(n/2)+1)
                cout<<"*";
            else
                cout<<" ";
          }
        } 
        cout<<endl;
    }
    return 0;
}