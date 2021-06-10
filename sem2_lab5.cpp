// Курс: 1, Семестр: 2, Группа: МКН-116
// Лабораторная работа: №5, Вариант: 12
// Студенит: Тимофеев Денис 

#include <iostream>
#include <cmath>

double PowerLog(double x, int n)
{
    if (x == 0)
    {
        throw "Error: log10(0) equal infinity";
    }
    else if (x < 0)
    {
        throw "Error: invalid negative argument in log10";
    }
    double lg_x = log10(x);
    if (n % 2 == 0 && lg_x < 0)
    {
        throw "Error: invalid negative argument in power";
    }

    return pow(lg_x, 1.0 / n);
}


int main()
{
    double x, y;
    int n;
    std::cout << "y(x, n) = pow(log10(x), 1/n)" << std::endl;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;

    try
    {
        y = PowerLog(x, n);
        std::cout << "y(x, n) = " << y << std::endl;
    }
    catch (const char* errorMessage)
    {
        std::cerr << errorMessage << std::endl;
    }
    
    return 0;
}

