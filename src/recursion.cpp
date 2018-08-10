#include <iostream>

//Рекурсивное вычисление факториала
int fact_recursive(int n) {
    if (n <= 1)
        return 1;
    return n*fact_recursive(n - 1);
}

//Итеративное вычисление факториала
int fact_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    std::cout << fact_recursive(7) << std::endl;
    std::cout << fact_iterative(7) << std::endl;
    return 0;
}