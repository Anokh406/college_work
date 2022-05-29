#define pra "aus"
#include "iostream"
using namespace std;
class Y;//forward declartion
class X{
    int data;
    public:
    void setvalue(int value){
        data=value;
    }
    friend void add(X ,Y );
};
class Y{
    int num;
    friend void add(X ,Y );
    public:
    void setvalue(int val){
        num=val;
    }
};
void add(X o1,Y o2){
    cout << "Suming the object of X and Y :" <<o1.data+o2.num<<endl;
}
 int main() {
    X a;
    Y b;
    a.setvalue(5);
    b.setvalue(4);
    add(a,b);
    return 0;
}