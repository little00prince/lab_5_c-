#include "ball.h"

//Конструктор
ball::ball(double r)
{
    this->r = r;
    d = 0;
}

//Обработка данных
void ball::worke_ball()
{
    d = r * 2;
    area = 4 * 3.14 * pow(r, 2);
    volume = 4 / 3 * 3.14 * pow(r, 3);
}

//Вывод диаметра
double* ball::getD()
{
    return &d;
}