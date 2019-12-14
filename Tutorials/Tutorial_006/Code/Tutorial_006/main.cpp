#include <iomanip>
#include <iostream>

int main()
{
    std::cout << "Hello World! \t hahsda \n";
    std::cout << "test\n";

    std::cout << std::hex << 253 << std::endl;

    std::string str;

    std::cout << "Wie lautet dein Name?: \n";
    std::getline(std::cin, str);
    std::cout << "Hallo " << str << std::endl;

    return 0;
}
