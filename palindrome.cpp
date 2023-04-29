#include<iostream>
using namespace std;
void pal(string a){
    string ne;
    string n;
    int l= a.length();
    for(int i=l-1; i>=0; i--){
        n= a[i];
        ne=ne+n;
    }
    if (ne==a){
        cout<<"Yes "<<a<<" is a palindrome string.";
    }
    else{
        cout<<"No "<<a<<" is not a palindrome string.";
    }
}
int main(){
    string c;
    cout<<"Enter A String: ";
    cin>>c;
    pal(c);
    return 0;
}