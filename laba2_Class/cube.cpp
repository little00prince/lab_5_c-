#include "cube.h"

cube::cube()
{
    for (int i = 0; i < N; i++)
        this->sides[i] = 0;
    diagonal = 0;
}

//Конструткор
cube::cube(double sides[])
{
    for (int i = 0; i < N; i++)
        this->sides[i] = sides[i];
}

//Обработка данных
void cube::worke_cube()
{
    diagonal = sqrtf(sides[0] * sides[1] * sides[2]);
    area = (sides[0] * sides[1] * 2) + (sides[0] * sides[2] * 2) + (sides[1] * sides[2] * 2);
    volume = sides[0] * sides[1] * sides[2];
}

//Вывод диагонали
double& cube::getDiagonal()
{
    return diagonal;
}