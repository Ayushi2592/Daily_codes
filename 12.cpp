#include<iostream>
using namespace std;
int sortarray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1]){
            return arr[n];
        }
        
    }
    return 0;
}
int main(){
    int arr[] = {1,5,3,8,5,3};
    cout<<"sorted array is"<<sortarray(arr,6);
}
