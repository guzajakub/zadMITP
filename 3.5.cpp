#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector operator+(const Vector&);
    void wyswietl(Vector);
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    int dimension_;

private:
    double data_[3] = { 0, 0, 0 };
};

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

Vector Vector::operator+(const Vector& right) {
    if (this->dimension_ == right.dimension_) {
        Vector result(0, 0);
        result.data_[0] = this->data_[0] + right.data_[0];
        result.data_[1] = this->data_[1] + right.data_[1];
        result.data_[2] = this->data_[2] + right.data_[2];
        return result;
    }
    else {
        cout << "\n Error: Niezgodny wymiar wektorow:" << endl;
    }
}

void Vector::wyswietl(Vector w) {
    cout << " Zmienna typu Vector po dodaniu :" << endl;
    for (int i = 0; i < w.dimension_; i++) {
        cout << " wartosc elementu o indeksie " << i << "  : " << w.data_[i] << endl;
    }
}

int main() {
    Vector r1(1.0); // R1
    Vector r2(6, 4); // R2
    Vector r2a(10, 11); // R2

    Vector c = r2 + r2a;

    c.wyswietl(c);


}
