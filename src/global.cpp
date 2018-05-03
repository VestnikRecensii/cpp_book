#include <iostream>
using namespace std;

int global = 1;//Это глобальная переменная, она доступна во всей программе ниже данной строки
int i = 2; //Это тоже глобальная переменная

int main() {
    
    int i = 3; //А это локальная переменная с именем i, она существует только внутри функции main
    {
        int local = 4; //Это локальная переменная во вложенной области, она доступна только внутри фигурных скобок
    }
    cout << i << endl; //Здесь будет напечатано 3
    //cout << local << endl; //Здесь будет ошибка - local не существует в данной области программы
    return 0;
}

//cout << i << endl; //А здесь печатать нельзя, хотя i из строки 5 по-прежнему существует.
