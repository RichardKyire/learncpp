#include "iostream"
// #include <string>
using namespace std;


int main(){
    int a = 10;
    int *p = &a;

    cout<<"a:"<<a<<" ,a's location:"<<&a<<endl;
    

    cout<<"*p:"<<*p<<" ,p:"<<p<<endl;

    int *p2 = new int;

    *p2 = 20;

    cout<<"*p2:"<<*p2<<endl;

    delete p2;

    cout<<"*p2:"<<*p2<<endl;

    cout<<"p2:"<<p2<<endl;
}