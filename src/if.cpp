#include <iostream>

int main() {
    int value = 10;
    bool condition = true;

    //Если condition содержит true, то:
    if (condition) { //используем составной оператор и
        std::cout << "Условие истинно" << std::endl; //печатаем строку
        value = 20; //изменяем значение value
    } else if (value > 5) { //Несмотря на то, что условие выполняется, ничего напечатано не будет, поскольку сработал первый if
        std::cout << "Значение value больше 5" << std::endl;
    } else { //Этот код выполнится, если все вышестоящие условия ложны
        std::cout << "Все условия ложны" << std::endl;
    }

    if (value > 5) //Условие истинно - строка напечатается
        std::cout << "Значение value больше 5" << std::endl;
    //Условия могут быть вложенными:
    if (condition)
        if (value > 10)
            std::cout << "+" << std::endl;
        else //else всегда относится к ближайшему if
            std::cout << "-" << std::endl;
    //Но чтобы избежать визуальной неоднозначности, можно просто ставить скобки:
    if (condition) {
        if (value > 10) {
            std::cout << "+" << std::endl;
        } else {
            std::cout << "-" << std::endl;
        }
    }
}
