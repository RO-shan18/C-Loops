/* Programmer =  Roshan Mehra
Purpose = Q6- Write a program to print alphabet diamond pattern:
Date = 29/10/2022  */

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
 
    int alphabet = 65;
    for(int i=1; i<=n; i++){

        for(int space=0; space<n-i; space++){
            cout<<" ";
        }

        alphabet = 65;
        for(int j=0; j<i; j++){
            cout<<char(alphabet);
            alphabet++;
        }

        alphabet = 65;
        if(i>=2){
            for(int j=0; j<i-1; j++){
                cout<<char(alphabet+i);
                alphabet++;
            }
        }
        cout<<endl;
    }

    for(int i=1; i<n; i++){

        for(int space=0; space<i; space++){
            cout<<" ";
        }

        alphabet = 65;
        for(int j=0; j<n-i; j++){
            cout<<char(alphabet);
            alphabet++;
        }

        alphabet = 65;
        for(int j=0; j<n-i-1; j++){
            cout<<char(alphabet+n-i);
            alphabet++;
        }
        cout<<endl;
    } 
    return 0;
}