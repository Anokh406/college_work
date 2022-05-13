#include <iostream>
using namespace std;
// constructor overloading
class complex{
    int a,b;
    public:
    // default constructor
    complex(){
        a=0;
        b=0;
    }
    // parameterized constructor

    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    
    void print(void){
        cout<<"The value of X :"<<a<<"and B :"<<b<<endl;
    }
};
int main(){
complex c1(5,7);
c1.print();
complex c2(5);
c2.print();
complex c3;
c3.print();
return 0;    
}