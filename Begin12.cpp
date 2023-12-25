
#include <iostream>
#include <cmath>

int main() {
    double S;
    const double pi = 3.14;

    // ������� ����� ���� � ���������
    std::cout << "S: ";
    std::cin >> S;

    // ���������� ������ D
    double D = sqrt((4 * S) / pi);

    // ���������� ������� L
    double L = pi * D;

    // �������� ����������
    std::cout << "(D): " << D << std::endl;
    std::cout << "(L): " << L << std::endl;

    return 0;
}
