/* Programmer =  Roshan Mehra
Purpose = Q9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
Date = 29/10/2022  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int count1, count2;
    int first_factor, second_factor;
    for(int i=2; i<n; i++){
        count1=0;
        for(int j=2; j<=i; j++){
            if(i==j)
            break;

            if(i%j==0)
            count1++;
        }

        if(count1==0){
            first_factor = i;

            for(int k=2; k<n; k++){
               count2=0;
                for(int l=2; l<=k; l++){
                  if(k==l)
                   break;

                  if(k%l==0)
                   count2++;
                }

                if(count2==0){
                  second_factor = k;
                    if(first_factor + second_factor == n){
                      cout<<first_factor<<" + "<<second_factor<<" = "<<n<<endl;
                    }
                }
            }
        }
    }
    return 0;
}