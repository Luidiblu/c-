#include <iostream>
#include <iomanip>

int main()
{
    int fn;
    int sn;
    std::cout << "Informe um número: ";
    std::cin >> fn;
    std::cout << "Informe outro número: ";
    std::cin >> sn;

    std::cout << "A soma desses números é:"
              << std::setw(2) << fn
              << "+"
              << std::setw(2) << sn
              << "-----------"
}