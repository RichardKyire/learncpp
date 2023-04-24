#include "iostream";

using namespace std;


int f(int &a){
    a = 200;
    return a;
}

int f2(int *p){
    *p = 300;
    return *p;
}

int main(){
    cout<<"测试c++引用"<<endl;

    int a = 10;
    f(a);

    cout<<"a:"<<a<<endl;

    int b = f2(&a);
    cout<<"a:"<<a<<endl;

    cout<<"b:"<<b<<endl;
   

}