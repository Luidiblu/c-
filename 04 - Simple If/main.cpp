#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int age;
    std::cout << "Informe sua idade: ";
    std::cin >> age;

    if (age > 16)
    {
        std::cout << "Você pode votar" << std::endl;
    }
    else
    {
        std::cout << "Você não pode votar" << std::endl;
    }
    return 0;
}