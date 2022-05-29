#include <iostream>
using namespace std;
class Base1{
    protected:
    int baseint1;
    public:
    void set_baseInt1(int a){
        baseint1=a;
    }
};
class Base2{
    protected:
    int baseint2;
    public:
    void set_baseInt2(int a){
        baseint2=a;
    }
};
class Derived :public Base1,public Base2{
    protected:
    int baseint3;
    public:
    void set_baseInt3(int a){
        baseint3=a;
    }
    void display(void){
        cout<<"The value of base-1 is:"<<baseint1<<endl;
        cout<<"The value of base-2 is:"<<baseint2<<endl;
        cout<<"The value of base-3 is:"<<baseint3<<endl;
        cout<<"The sum of all values  is:"<<baseint1+baseint2+baseint3<<endl;
    }
};
int  main() {
    Derived d;
    d.set_baseInt1(25);
    d.set_baseInt2(20);
    d.set_baseInt3(5);
    d.display();
    return 0;   
}