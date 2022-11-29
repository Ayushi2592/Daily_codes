#include<iostream>
using namespace std;
int main(){
    char intial = 'p';
    char *pIntial= &intial;
    cout<<"the memory of the address is"<<(void*)pIntial<<endl;
}