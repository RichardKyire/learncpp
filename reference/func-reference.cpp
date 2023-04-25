#include "iostream"
#include<stdio.h>
using namespace std;

int f1(){
    int a = 10;
    a++;
    return a;
}

int& f2(){
    static int a = 10;
    a++;
    return a;
}

int* f3(){
    int a=10;
    a++;
    return &a;
}

int main(){
    printf("方法返回引用");
    int a1 = 0;
    a1 = f1();
    int a2 =  0;
    a2 = f2();
    int &a3 = f2();
    // int *a4 = f3();
    printf("a1:%d,a2:%d,a3:%d",a1,a2,a3);
}