#include <iostream>

int main()
{
    const char c = 73;
    std::string var_string = "Hello World!";

    int var_int = -10;
    const unsigned int var_uint = -11;

    float var_float = 4.735f;
    double var_double = 4.55;
    long double var_longdouble = 4.67l;

    var_int = var_int - 1;

    bool var_bool = true;

    std::cout << var_bool << std::endl;

    return 0;
}
