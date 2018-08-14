#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(0);
    std::cout << rand() << std::endl; //Всегда будет генерировать одно и то же число, т.к. мы всегда инициализируем генератор нулем.
    std::cout << "Текущее время: " << time(0) << std::endl; //Показывает текущее время
    srand(time(0)); //Инициализация генератора значением текущего времени
    std::cout << rand() << std::endl; //А тут будут разные значения
    return 0;
}