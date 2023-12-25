#include <iostream>

int main() {
    double diameter; // оголошення змінної
    const double pi = 3.14;

    std::cout << "Enter the diameter: "; // введення діаметра
    std::cin >> diameter;

    double L = pi * diameter; // вирахування довжини

    std::cout << "Length of round: " << L << std::endl; // вивід у консоль

    return 0;
}
