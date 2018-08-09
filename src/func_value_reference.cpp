#include <iostream>

//a передается по значению, b - по ссылке
int test(int a, int& b) {
    a += 10;
    b *= 2;
    return a + b;
}

int main() {
    int value1 = 1, value2 = 2;
    std::cout << test(value1, value2) << std:: endl;
    //Значение value2 изменилось, а value1 - нет:
    std::cout << value1 << " " << value2 << std:: endl;
    std::cout << test(1, value2) << std:: endl; //Такой вызов возможен, 
    // std::cout << test(value1, 1) << std:: endl; //А такой нет, передать по ссылке число нельзя, 
    return 0;
}