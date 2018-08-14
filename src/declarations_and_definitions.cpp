#include <iostream>

int B(int n); //Это объявление функции B, без него мы бы не смогли скомпилировать программу - в функции A вызывается B, а в функции B - A.
int B(int); //Это объявление, идентичное предыдущему. 

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
    std::cout << B(precision)/(float)A(precision) << std::endl; //Будет напечатано 1,4142, т.е. отношение этих функций равно квадратному корню из 2.
    return 0;
}