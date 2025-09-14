#include<iostream>
using namespace std;
class CircleArea {
public:
    void Area(int r) {
        int area = 3.14 * r * r;
        cout<<"Area of the circle " << r << " is: " << area << endl;
    }
};
int main() {
    CircleArea circle;
    circle.Area(10);
    return 0;
}