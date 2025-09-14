#include<iostream>
using namespace std;
// int main(){
//     int a, b, sum;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     sum = a + b;
//     cout << "Sum: " << sum << endl;
//     return 0;
// }

class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Addition addition;
    int result = addition.add(5, 10);
    cout << "Result: " << result << endl;
    return 0;
}