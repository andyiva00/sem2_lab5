// Course: 1, Semester: 2, Group: MKN-116
// Lab: #5, Variant: 12
// Student: Timofeev Denis

#include <iostream>
#include <cmath>

template <typename T>
T InputData(std::string varName)
{
    T value;
    std::cout << "Enter " + varName + ": ";
    std::cin >> value;
    while (std::cin.fail())
    {
        std::cout << "Wrong input data, try again: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> value;
    }

    return value;
}

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

    x = InputData<double>("x");
    n = InputData<int>("n");

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

