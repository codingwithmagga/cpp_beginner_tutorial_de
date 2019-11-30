#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

int main()
{

    double x1 = 3.0;
    double x2 = std::sqrt(3.0) * std::sqrt(3.0);

    bool equal_check = (x1 == x2);

    std::cout << "x1: " << std::setprecision(20) << x1 << std::endl;
    std::cout << "x2: " << std::setprecision(20) << x2 << std::endl;
    std::cout << "equal check: " << equal_check << std::endl;

    std::cout << "epsilon: " << std::numeric_limits<double>::epsilon() << std::endl;

    return 0;
}
