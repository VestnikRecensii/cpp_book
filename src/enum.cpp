#include <iostream>

using namespace std;

enum { RED = 1, GREEN = 0, BLUE = -1 }; //Безымянное перечисление с заданным значением констант

enum Week {Mo, Tu, We, Th, Fr, Sa, Su}; //перечисление дней недели с именем Week
//Можно создавать свои функции, явно использующие тип
ostream& operator<<(ostream& out, const Week& v) { //Эта функция печатает имя дня недели и не работает с другими типами
    const char *names[] = {"Mo", "Tu", "We", "Th", "Fr", "Sa", "Su"};
    return out << names[v];
}

int main() {
    int color = RED; //использование константы RED
    int holiday1 = Week::Sa; //можно использовать элемент перечисления с указанием его пространства имен
    int holiday2 = Su; //а можно без.
    cout << holiday1 << endl; //тут будет напечатано 5, потому что holiday1 имеет тип int
    cout << Week::Sa << endl; //а тут название дня недели, потому что мы явно создали функцию печати для этого типа 
    return 0;
}