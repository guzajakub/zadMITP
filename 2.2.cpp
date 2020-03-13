#include <iostream>
using namespace std;

class Circle {
    public:
    float *radius_;
    Circle(int radius) {
    radius_=new float[radius];
    }
    ~Circle(void){
        delete [] radius_;
    }
};

int main() {
    Circle c1(2.3);
    cout << c1.radius_[1] << endl;
}



