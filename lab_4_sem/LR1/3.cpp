#include <iostream>
using namespace std;

void obmen1(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}

void obmen2(int* x,int* y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

void obmen3(int& x,int& y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main(){

    setlocale(LC_ALL, "Russian");

    int a=2, b=5;
    cout<<"�� ������: a= "<<a<<" b= "<<b<<endl;
    obmen1(a,b);
    cout<<"����� 1 ������: a= "<<a<<" b= "<<b<<endl;
    obmen2(&a,&b);
    cout<<"����� 2 ������: a= "<<a<<" b= "<<b<<endl;
    obmen3(a,b);
    cout<<"����� 3 ������: a= "<<a<<" b= "<<b<<endl;
}