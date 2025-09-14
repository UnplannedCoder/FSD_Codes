#include<iostream>
using namespace std;
// int main(){
//     cout<<"Hello World!"<<endl;
//     cout<<"This is a C++ program."<<endl;
//     return 0;
// }

class HelloWorld {
public:
    void greet() {
        cout << "Hello, World!" << endl;
    }
};
int main(){
    HelloWorld hello;
    hello.greet();
    return 0;
}