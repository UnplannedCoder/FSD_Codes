#include<iostream>
using namespace std;
class A {
public:
    void show() {
        cout<<"Single Inheritance"<<endl;
    }
};
class B : public A {
public:};
int main() {
    B obj;
    obj.show();
    return 0;
}