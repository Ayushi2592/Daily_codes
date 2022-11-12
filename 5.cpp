//sum of digits using recursion
#include<iostream>
using namespace std;
int getdigits(int n){
    if(n==0)
        return 0;
    else
        return getdigits(n/10) + n%10;
    
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"sum of the digits is"<<getdigits(n);
}