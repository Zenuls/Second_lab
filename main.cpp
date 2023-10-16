#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>


using namespace std;

int main()
{
    int x,y, cnt = 0;
    srand(time(NULL));
    setlocale(0, "");
    cout << "Добро пожаловать в игру!" << endl;
    cout << "Условия игры:" << endl;
    cout << "У Вас есть 5 попыток" << endl;
    cout << "Вводите  координаты (x,y) для выстрела (с клавиатуры, через пробел)" << endl;
    for (int i=1; i<=5; i=-(~i)) {
        cout << "Совершите выстрел" << endl;
        cin >> x >> y; // Ввод данных о выстреле
        x += rand() % 10 - 5; // Изменение координат
        y += rand() % 10 - 5;
        cout << "Вы попали в точку с координатами: " << endl;
        cout << "(" << x << ", " << y <<")" << endl; // Вывод координат попадания
        x = int(sqrt(pow(x,2)+pow(y,2)));
        x = (((sqrt (pow(-x +5,2))) -x+ 5)/2); // функция (График прикреплён на фото)
        cnt += x;
        cout << "Вы набрали "<< x << " очков при этом выстреле" << endl; // Вывод значения функции
        cout << endl;
    }
    cout << "Выстрелы закончились" << endl;
    cout << endl;
    cout << "За всю игру вы набрали " <<  cnt << " очков " << endl;
    cout << (cnt <10 ? "Лузер!!!":" ") << endl;

    return 0;
}
