#include <iostream>
#include <iomanip>

int main()
{
    int year = 2020, mon = 4, day = 5;

    std::cout << "Date is: "
              << std::setw(2) << day
              << "."
              << std::setw(2) << mon
              << "."
              << year << ".";
    return 0;
}