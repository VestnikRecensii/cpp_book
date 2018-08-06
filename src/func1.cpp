#include <iostream>

int main() {
    int a = 2, b = 2;
    //Посчитаем сумму, разность, произведение и частное этих чисел:
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    //Еще раз:
    a = 7;
    b = 5;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    //И еще раз:
    a = 512;
    b = 256;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    return 0;
}
