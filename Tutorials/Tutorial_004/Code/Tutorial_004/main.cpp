#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{

    float a = 3.0;
    double b = 3.0;
    long double c = 3.0l;

    int num_wurzel = 2;

    for (int i = 0; i < num_wurzel; ++i) {
        a = sqrt(a);
        b = sqrt(b);
        c = sqrt(c);
    }

    for (int i = 0; i < num_wurzel; ++i) {
        a = a * a;
        b = b * b;
        c = c * c;
    }

    cout << std::setprecision(10) << "a: " << a << endl;
    cout << std::setprecision(10) << "b: " << b << endl;
    cout << std::setprecision(10) << "c: " << c << endl;

    return 0;
}
