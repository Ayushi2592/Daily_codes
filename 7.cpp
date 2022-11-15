#include<iostream>
using namespace std;
void hanoi(int s,int d,int h,int n){
    if(n==1){
        cout<<"moving plate from s to d"<<endl;
        return;
    }
hanoi(s,h,d,n-1);
cout<<"move plate from s to h"<<endl;
hanoi(h,d,s,n-1);
cout<<"moving  plate from h to d"<<endl;
}
int main(){
    int n;
    cin>>n;
    int s=1;
    int h=2;
    int d=3;
    hanoi(s,d,h,n);
}

