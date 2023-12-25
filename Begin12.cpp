
#include <iostream>
#include <cmath>

int main() {
    double S;
    const double pi = 3.14;

    // «читуЇмо площу кола з клав≥атури
    std::cout << "S: ";
    std::cin >> S;

    // ќбчислюЇмо д≥аметр D
    double D = sqrt((4 * S) / pi);

    // ќбчислюЇмо довжину L
    double L = pi * D;

    // ¬иводимо результати
    std::cout << "(D): " << D << std::endl;
    std::cout << "(L): " << L << std::endl;

    return 0;
}
