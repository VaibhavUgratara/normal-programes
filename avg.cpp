#include<iostream>
using namespace std;

void avg(){
    float n;
    float sum=0;
    int count=0;
    float average;
    char an = 'y';
    while ((an =='y')||an =='Y'){
        cout<<"Enter A Number: ";
        cin>>n;
        sum=sum+n;
        count++;
        cout<<"Want to Enter New number?"<<endl;
        cout<<"If yes type Y or N"<<endl;
        cin>>an;
        if ((an =='N') || (an =='n')){
            break;
        }
    }
    average=sum/count;
    cout<<"Average is "<<average<<".";
}

int main(){
    avg();
    return 0;
}