#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

int main()
{
    double x1 = 5.0 + 3.0;
    double x2 = 10.0 - x1;
    double x3 = x1 * x2;
    double x4 = x3 / 2.0;

    x4 += 5.0;
    x4 -= 2.0;

    x4++;
    x4--;
    ++x4;
    --x4;

    std::cout << "x4: " << x4 << std::endl;

    int x5 = 1;
    int x6 = ++x5;

    std::cout << "x5: " << x5 << std::endl;
    std::cout << "x6: " << x6 << std::endl;

    bool A = true;
    bool B = false;

    bool C = !A;

    std::cout << "C: " << C << std::endl;

    double x7 = 3.0;
    double x8 = std::sqrt(3.0) * std::sqrt(3.0);

    bool D = (x7 == x8);

    std::cout << "x7: " << std::setprecision(20) << x7 << std::endl;
    std::cout << "x8: " << std::setprecision(20) << x8 << std::endl;

    std::cout << "epsilon: " << std::numeric_limits<float>::epsilon() << std::endl;

    return 0;
}
