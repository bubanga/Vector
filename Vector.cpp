#include "Vector.h"

Vector::Vector() {
    this->n = 0;
    this->elem = new double [0];
}

Vector::Vector(int n) {
    this->n = n;
    this->elem = new double [this->n];
    this->generateElem();
}

Vector::Vector(const Vector &other) {
    this->n = other.n;
    this->elem = new double [this->n];
    for (int i = 0; i < other.size(); ++i) {
        this->elem[i] = other[i];
    }
}

Vector &Vector::operator=(const Vector &) {
    return *this;
}

Vector::~Vector() {
    delete[] this->elem;
}

double &Vector::at(int _n) {
    if (_n < 0 || _n >= this->n) {
        throw std::invalid_argument("Bad index");
    }


    return this->elem[_n];
}

double &Vector::operator[](int _n) const {
    return this->elem[_n];
}

size_t Vector::size() const {
    return this->n;
}

Vector Vector::operator+=(const Vector &v) {
    if (this->n != v.size()) {
        throw std::invalid_argument("Bad size of vector");
    }

    for (int i = 0; i < this->n; ++i) {
        this->elem[i] = this->elem[i] + v.elem[i];
    }
    
    return *this;
}

Vector Vector::operator*=(double d) {
    for (int i = 0; i < this->n; ++i) {
        this->elem[i] = this->elem[i] * d;
    }

    return *this;
}

void Vector::generateElem() {
    for (int i = 0; i < this->n; ++i) {
        this->elem[i] = this->min + (rand() % (this->max - this->min + 1));
    }
}

void Vector::print() {
    for (int i = 0; i < 2; ++i) {
        std::cout << this->elem[i] << " ";
    }
}

Vector operator+(const Vector& v1, const Vector& v2) {
    Vector v = Vector(v1);
    v += v2;
    return v;
}

double operator*(const Vector& v1, const Vector& v2){
    if (v1.size() != v2.size()) {
        throw std::invalid_argument("Bad size of vector");
    }

    double sum = 0;
    for (int i = 0; i < v1.size(); ++i) {
        sum += v1[i] * v2[i];
    }
    return sum;
}
