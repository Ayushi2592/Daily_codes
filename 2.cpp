#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 0;
    }
    return n*n-1;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"factorial of a number is"<<factorial(n);
}
