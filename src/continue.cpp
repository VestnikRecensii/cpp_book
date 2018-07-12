#include <iostream>
 
int main() {
    int in_number; // переменная для хранения введённого числа
    do {
        std::cout << "Введите число: ";
        std::cin >> in_number; //Вводим число с клавиатуры
        if ( in_number > 10 || in_number < 0 ) // если введённое число не входит в заданный интервал
            continue; // переходим на следующую итерацию цикла
        std::cout << "Квадрат = " << in_number * in_number << std::endl; // возводим в квадрат введённое число
    } while ( in_number > 0 ); //цикл будет работать пока введённое число больше нуля
    return 0;
}