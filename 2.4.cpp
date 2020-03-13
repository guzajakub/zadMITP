#include <iostream>
using namespace std;


class Circle {
    public:
    float radius_;
    float circumference();
    float area();
};

float Circle::circumference() {
    return 2*3.14*radius_;
}

float Circle::area() {
    return 2*3.14*aradius_*radius_;
}

int main() {
    Circle c1, c2;
    c1.radius_=5;
    c2.radius_=6;
    cout << c1.circumference() << endl;
    cout << c2.area() << endl;
}


