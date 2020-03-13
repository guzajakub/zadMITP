#include <iostream>
using namespace std;

class Circle{
private:
  float radius_;
  float area_;
  float circumference_;
    
public:
  Circle(float, float);
};

Circle::Circle(float radius, float area) : radius_(radius), area_(area) {}


int main() {
    Circle c1(2.5,5.5);
    Circle c2(5,8);
}

