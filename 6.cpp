#include<iostream>
using namespace std;
void solve(string ip,string op){
    if(ip.length()==0){
        cout<<op<<" ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0])
    ip.erase(ip.begin()+0)
    return solve(ip.op1)
    return solve(ip.op2)
}
int main(){
    string ip;
    cin>>ip;
    string op = " ";
    solve(ip,op);
}