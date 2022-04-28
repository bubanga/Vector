#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H
#include <iostream>
#include <stdexcept>

class Vector {
private:
    int min = -10;
    int max =  10;
    int n;
    double* elem;

public:

    /**
     * konstruktor pustego wektora (zawiera 0 elementów)
     */
    Vector();

    /**
     * konstruktor tworzący wektor n-elementowy
     * @param n
     */
    explicit Vector(int n);

    /**
     * konstruktor kopiujący
     */
    Vector(const Vector&);

    /**
     * operator podstawienia
     */
    Vector& operator=(const Vector&);

    /**
     * destruktor
     */
    ~Vector();

    /**
     * dostęp do elementu wektora ze sprawdzeniem poprawności indeksu
     * @return
     */
    double& at(int);

    /**
     * nie sprawdza poprawności indeksu
     * zwraca zawartosc dla tego indeksu
     * @return
     */
    double& operator[](int) const;

    /**
     * zwraca liczbę elementów wektora
     * @return
     */
    size_t size() const;

    /**
     * operator += (dodaj wektor v do bieżącego wektora)
     * @param v
     * @return
     */
    Vector operator+=(const Vector& v);

    /**
     * operator *= (pomnóż bieżący wektor przez d)
     */
    Vector operator*=(double d);

    void print();

private:
    void generateElem();
};

/**
 * suma v1 + v2
 * @param v1
 * @param v2
 * @return
 */
Vector operator+(const Vector& v1, const Vector& v2);

/**
 * iloczyn skalarny v1 i v2
 * @param v1
 * @param v2
 * @return
 */
double operator*(const Vector& v1, const Vector& v2);


#endif //VECTOR_VECTOR_H
