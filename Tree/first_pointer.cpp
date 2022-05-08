#include<iostream>
using namespace std;

int main(){
 int a=4;
 int *b=&a;
 int **c=&b;
 cout<<"addres of a"<<&b<<endl;
 cout<<*b<<endl;
 cout<<&c<<endl;
    return 0;
}