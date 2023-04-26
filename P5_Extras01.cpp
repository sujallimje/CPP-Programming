#include<iostream>
#include<iomanip> //for manipulators

using namespace std;

int c=4;

int main(){

    //GLOBAL AND LOCAL VARIABLES

    int a =4,b=5;
    int c=a+b;
    cout<<"Value of local 'c' is "<<c<<endl<<"Value of global 'c' is "<<::c<<endl;

    //REFERENCE VARIABLES

    int e=34;
    int &f=e;
    cout<<"Value of e = "<<e<<endl<<"Value of Reference Variable f = "<<f<<endl;

    //TYPECASTING

    float g=3.141;
    cout<<"Integer value of "<<g<<" is "<< int(g)<<endl;    
    
    //CONSTANTS

    const double h =43.56; 
    //h=34.56 ;   //cannot change value of constant
    
    //MANIPULATORS

    int i=123,j=45678;
    cout<<"Value : "<<setw(3)<<a<<endl;
    cout<<"Value : "<<setw(3)<<e<<endl;
    cout<<"Value : "<<setw(3)<<i<<endl;
    cout<<"Value : "<<setw(3)<<j<<endl;

    return 0;
}