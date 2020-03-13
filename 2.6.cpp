#include <iostream>
using namespace std;

class Circle{
private:
  float radius_;
  float area_;
  float circumference_; 
    
public:
  float getRadius();
  void setRadius(float);
  Circle(float, float);
};

Circle::Circle(float radius, float area) : radius_(radius), area_(area) {}

float Circle::getRadius() {
    return radius_;
}
void Circle::setRadius(float radius) {
    radius_=radius;
}

int main() {
    Circle c1(2.2, 5.8);
    c1.setRadius(5);
    cout << c1.getRadius() << endl;
    
}



