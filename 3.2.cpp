#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double,double);
    Vector(double,double,double);
    int dimension_;
    void wyswietl(Vector);
    int wyswietl();
private:
    double data_[3] = { 0, 0, 0 };
};

void Vector::wyswietl(Vector r) {
    cout << r.dimension_ << endl;
    for (int i=0;i<3;i++) {
        cout << data_[i] << " ";
    }
    cout << endl;
}

int Vector::wyswietl() {
    cout << dimension_ << endl;
    for (int i=0;i<3;i++) {
        cout << data_[i] << " ";
    }
    cout << endl;
}

Vector::Vector(double element1) {
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1, double element2) {
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1, double element2, double element3) {
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}

int main() {
    Vector r1(1.0);
    Vector r2(1.0,2.0);
    r1.wyswietl(r1);
    r2.wyswietl(r2);
    r1.wyswietl();
} 


