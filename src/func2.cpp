#include <iostream>

void printArithmeticOperations(int a, int b) {
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
}

int main() {
    int a = 2, b = 2;
    //Посчитаем сумму, разность, произведение и частное этих чисел:
    printArithmeticOperations(a, b);
    a = 7;
    b = 5;
    //Еще раз:
    printArithmeticOperations(a, b);
    //И еще раз:
    printArithmeticOperations(512, 256);
    return 0;
}
