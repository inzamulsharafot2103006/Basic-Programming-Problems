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

    cout<<c<<endl;
    cout<<(a*b)/c<<endl;
    return 0;
}