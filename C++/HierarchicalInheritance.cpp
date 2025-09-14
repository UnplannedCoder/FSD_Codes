#include<iostream>
using namespace std;
class A {
public:
    void show() {
        cout<<"Hierarchical Inheritance"<<endl;
    }
};
class B : public A {
public:};
class C : public A {
public:};
int main() {
    B obj1;
    C obj2;
    obj1.show(); // Accessing method from class A through class B
    obj2.show(); // Accessing method from class A through class C
    return 0;
}