#include<iostream>
using namespace std;
class A {
public:
    void show() {
        cout<<"Hybrid Inheritance"<<endl;
    }
};
class B : public A {
public:};
class C {
public:};
class D : public B, public C {
public:};
int main() {
    D obj;
    obj.show(); // Accessing method from class A through class B and C
    return 0;
}