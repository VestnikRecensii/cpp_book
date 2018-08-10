#include <iostream>

int B(int n); //Это объявление функции B, без него мы бы не смогли скомпилировать программу - в функции A 

int A(int n) {//А это определение
    if (n == 1) 
        return 1;
    else
        return A(n - 1) + B(n - 1);
}

int B(int n) {
    if (n == 1) 
        return 1;
    else
        return 2*A(n - 1) + B(n - 1);
}

int main() {
    int precision = 10;
    std::cout << B(precision)/(float)A(precision) << std::endl;
    return 0;
}