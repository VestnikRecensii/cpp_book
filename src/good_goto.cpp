#include <iostream>
 
int main() {
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++) { //3 вложенных цикла
                std::cout << "i = " << i << ", j = " << j << ", k = " << k << std::endl;
                if (i == 3 && j == 4 && k == 5) //сложное условие выхода
                    goto L1; //выходим изо всех циклов
            }
    L1: std::cout << "Выход из цикла" << std::endl;

    //Аналогичный код без использования goto
    bool flag = false;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) { 
                std::cout << "i = " << i << ", j = " << j << ", k = " << k << std::endl;
                if (i == 3 && j == 4 && k == 5) {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    std::cout << "Выход из цикла" << std::endl;
}