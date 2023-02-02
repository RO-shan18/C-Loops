/* Programmer =  Roshan Mehra
Purpose = Q10- Write a C++ program to print a rectangle out of *
Date = 29/10/2022*/

#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter the number of StarRows: "<<endl;
    cin>>row;
    cout<<"Enter the number of StarCols: "<<endl;
    cin>>col;

    cout<<endl;
    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){

            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}