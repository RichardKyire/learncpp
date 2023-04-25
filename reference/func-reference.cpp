#include "iostream"
using namespace std;

int f1(){
    int a = 10;
    a++;
    cout<<"a:"<<a<<" in f1()"<<endl;
    return a;
}

int& f2(){
    static int a = 10;
    a++;
    return a;
}

int main(){
    cout<<"测试方法返回引用"<<endl;
    int a1 = f1();
    int a2  = f2();
    int &a3 = f2();
    // int *a4 = f3();
    cout<<"a1:"<<a1<<",a2:"<<a2<<",a3:"<<a3<<endl;
}