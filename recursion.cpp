#include<iostream>
using namespace std;
int count(int a){
    if (a==0){
        return 0;
    }
    else{
        return 1+count(a/10);
    }
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Digits = "<<count(n);
    return 0;
}