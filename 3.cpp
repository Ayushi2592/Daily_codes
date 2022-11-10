#include<iostream>
using namespace std;
int getno(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    getno(n-1);
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"getno of a n is"<<getno(n);
}