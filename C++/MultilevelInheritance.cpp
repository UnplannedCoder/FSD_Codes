#include<iostream>
using namespace std;
class A {
public:
    void show() {
        cout<<"Multilevel Inheritance"<<endl;
    }
};
class B : public A {
public:};
class C : public B {
public:};
int main() {
    C obj;
    obj.show();
    return 0;
}