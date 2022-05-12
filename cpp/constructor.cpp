#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void);//costructor declartion
    void display(void){
        cout << "The value of A is: " <<a<<"B IS :" <<b<<endl;
    }
};
complex::complex(void){
    a=10;
    b=20;
}
 int main() {
    complex c;
    c.display();
    return 0;
}