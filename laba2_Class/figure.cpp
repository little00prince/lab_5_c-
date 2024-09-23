#include "figure.h"

//Вывод площади
double figure::get_area()
{
    return area;
}

//Вывод периметра
double figure::get_volume()
{
    return volume;
}

//Ввод типа фигуры
void figure::setType(int e)
{
    type = e;
}

//Вывод типа фигуры
int figure::getType()
{
    return type;
}

//Деструктор
figure::~figure()
{

}

//Конструткор
figure::figure()
{
    area = 0;
    volume = 0;

}

int figure::type = 0;
