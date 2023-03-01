# Basic-Programming-Problems
This repository contains basic levels of programming questions with their solve code





#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Two Numbers : ";
    cin>> a >> b;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            c = i;
        }
    }
    // By using for loop
    /*while(a!=b){
        if(a>b){
            a -= b;
        }
        else{
            b -= a;
        }
    }*/
    // By Using while Loop

    cout<<"The GCD OF this two numbers is "<<c<<endl;
    cout<<"The LCM OF this two numbers is "<<(a*b)/c<<endl;
    return 0;
}