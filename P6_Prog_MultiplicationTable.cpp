#include<iostream>

using namespace std;

int main(){
    cout<<"*******MULTIPLICATION TABLE***********"<<endl;
    cout<<"Enter Number : ";
    int a;
    cin>>a;

    for(int i=1;i<=10;i++){
        cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    }

    return 0;
}