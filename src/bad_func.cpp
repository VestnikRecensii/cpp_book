#include <iostream>

int global = 10;

int badSum(int a) {
    //Плохая функция сложения, использующая глобальную переменную
    return a + global;
}

int veryBadSum(int a) {
    //Очень плохая функция сложения, изменяющая глобальную переменную
    int result = a + global;
    global *= 2;
    return result;
}

int awfulSum(int a) {
    //Вообще ужасная функция - она не только изменяет глобальную переменную, но и печатает свой результат
    int result = a + global;
    global *= 2;
    std::cout << result << std::endl;
    return result;
}

int main() {
    std::cout << badSum(5) << std::endl; //тут будет 15
    global = 5;
    std::cout << badSum(5) << std::endl; //а тут 10

    std::cout << veryBadSum(5) << std::endl; //тут снова 10
    std::cout << veryBadSum(5) << std::endl; //А тут уже 15

    std::cout << awfulSum(5) << std::endl; //Тут будет дважды напечатано 25
    return 0;
}
