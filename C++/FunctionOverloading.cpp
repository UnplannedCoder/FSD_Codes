#include<iostream>
using namespace std;
class A {
public:
    void add(int a, int b){
        int c=a+b;
        cout<<c<<endl;
    }
    void add(int a, int b, int c) {
        int d=a+b+c;
        cout<<d<<endl;
    }
};
int main() {
    A A1;
    A1.add(10,20);
    A1.add(10,20,30);
    return 0;
}