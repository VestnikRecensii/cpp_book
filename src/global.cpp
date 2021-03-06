#include <iostream>
using namespace std;

int global = 1;//Это глобальная переменная, 
//она доступна во всей программе ниже данной строки
int i = 2; //Это тоже глобальная переменная

typedef int integer;//определим новое имя типа, 
//чтобы в дальнейшем иметь возможность писать integer вместо int

struct Structure { //Здесь можно определить новый тип данных - структуру
    int n, m;
};

int function() { //или новую функцию
    return 1;
}

int main() {
    struct Structure2 { //Здесь тоже можно определить новый тип данных
        int n, m;
    };
    /*int function2() { //А вот функцию здесь определить нельзя
        return 1;
    }*/
    int i = 3; //А это локальная переменная с именем i, 
    //она существует только внутри функции main
    {
        integer local = 4; //Это локальная переменная во вложенной области, 
        //она доступна только внутри фигурных скобок
    }
    cout << i << endl; //Здесь будет напечатано 3
    //cout << local << endl; 
    //Здесь будет ошибка - local не существует в данной области программы
    return 0;
}

//cout << i << endl; //А здесь нельзя печатать и использовать другие операторы,
//хотя i из строки 6 по-прежнему существует.
