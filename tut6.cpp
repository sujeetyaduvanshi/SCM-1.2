#include<iostream>
using namespace std;

int main(){
    int a=5,b=9;

    cout<<"1. Arithmetic Operators"<<endl;
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl;
    cout<<"2. Comparison Operators"<<endl;
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<endl;
    cout<<"3. Logical Operators"<<endl;
    cout<<"The value of a==b && a>b is: "<<((a==b) && (a>b))<<endl;
    cout<<"The value of a==b || a>b is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of (!(a==b)) is: "<<(!(a==b))<<endl;
    return 0;
}