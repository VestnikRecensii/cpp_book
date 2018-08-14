#include <iostream>

//Объем куба:
int volume(int s) {
    return s*s*s;
}
 
//Объем цилиндра:
double volume(double r, int h) {
    return 3.1415926*r*r*h;
}
 
//Объем прямоугольного параллелепипеда
long volume(long l, int b, int h) {
    return l*b*h;
}

//А такую функцию делать нельзя - компилятор не сможет отличить ее от первой, потому что их аргументы одинаковы
/*long volume(int s) {
    return s*s*s;
}*/

int main() {
    std::cout << volume(10) << std::endl;
    std::cout << volume(2.5, 10)  << std::endl;
    std::cout << volume(1000, 30, 20)  << std::endl;
    return 0;
}