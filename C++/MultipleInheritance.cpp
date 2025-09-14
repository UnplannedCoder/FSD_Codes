#include<iostream>
using namespace std;
class A {
public:
    void show() {
        cout<<"Multiple Inheritance"<<endl;
    }
};
class B {
public:
    void display() {
        cout<<"Class B"<<endl;
    }
};
class C : public A, public B {
public:};
int main() {
    C obj;
    obj.show(); // Accessing method from class A
    obj.display(); // Accessing method from class B
    return 0;
}