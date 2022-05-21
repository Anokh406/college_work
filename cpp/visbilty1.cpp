#include<iostream>
using namespace std;
class Employee{
    int a;
public:
    int b=10;
    protected:
    int c;
};
class Programmer: public Employee{
    public:
    int d=5;
};
int main(){
    Programmer anokh;
    cout<<anokh.d<<endl;
    cout<<anokh.b<<endl;
    return 0;
}