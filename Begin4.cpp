#include <iostream>

int main() {
    double diameter; // ���������� �����
    const double pi = 3.14;

    std::cout << "Enter the diameter: "; // �������� �������
    std::cin >> diameter;

    double L = pi * diameter; // ����������� �������

    std::cout << "Length of round: " << L << std::endl; // ���� � �������

    return 0;
}
