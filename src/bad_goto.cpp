#include <iostream>
 
int main() {
    int in_number;
    L1: 
    std::cout << "Введите число: ";
    std::cin >> in_number;
    if ( in_number <= 0 ) //Если введённое число больше нуля
        goto L2; // переходим на метку L2 и завершаем программу
    if ( in_number > 10 || in_number < 0 ) // Если введённое число не входит в заданный интервал
        goto L1; // переходим на метку L1 и повторяем ввод
    std::cout << "Квадрат = " << in_number * in_number << std::endl; // возводим в квадрат введённое число
    goto L1; //переходим на метку L1
    L2: return 0;
}