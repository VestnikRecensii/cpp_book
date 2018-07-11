#include <iostream>

int main() {
    int value = 1;
    switch (value) {
        case 1: //Если value = 1
            std::cout << "value = 1\n";
            break; //Закончим работать с меткой 1 и перейдем дальше
        case 2: //Пустая метка. При попадании сюда переходим к следующей.
        case 3: //если value равно 2 или 3
            std::cout << "value = 2 или value = 3\n";
            break;
        case 4: //value равно 4
            std::cout << "value = 4\n";
        case 5: //value равно 5. Но этот же код выполнится и при value == 4. Почему? Потому что в блоке с меткой 4 нет оператора break
            std::cout << "value = 5\n";
            break;
        default: //Если ни одна из меток не подошла
            std::cout << "Default value\n";
    }
}
