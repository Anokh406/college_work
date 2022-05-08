#include<iostream>
using namespace std;
int main(){
    int marks[4]={10,20,35,40};
    int* p =marks;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    // cout<<*(p+1)<<endl;
    // cout<<*(p+2)<<endl;
    // cout<<*(p+3)<<endl;
    return 0;
}