#include <iostream>
#include "Vector.h"

int main() {
    srand(time(nullptr));
    Vector v1 = Vector(2);
    Vector v2 = Vector(2);
    std::cout << "v1 = ";
    v1.print();
    std::cout << std::endl;
    std::cout << "v2 = ";
    v2.print();
    std::cout << std::endl;

    std::cout << "v1.at[0] = " << v1.at(0);
    std::cout << std::endl;
    std::cout << "v2.at[1] = " << v2.at(1);
    std::cout << std::endl;

    std::cout << "v1[0] = " << v1[0];
    std::cout << std::endl;
    std::cout << "v2[1] = " << v2[1];
    std::cout << std::endl;

    std::cout << "(v1 *= 2) = ";
    v1 *= 2;
    v1.print();
    std::cout << std::endl;
    std::cout << "(v2 += v1) = ";
    v2 += v1;
    v2.print();
    std::cout << std::endl;

    std::cout << "v1 + v2 = ";
    (v1 + v2).print();
    std::cout << std::endl;
    std::cout << "v2 * v1 = ";
    std::cout << (v2 * v1);
    std::cout << std::endl;

    return 0;
}