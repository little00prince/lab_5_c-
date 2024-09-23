#include "tetrapyramid.h"

tetrapyramid::tetrapyramid()
{

}

//Конструктор
tetrapyramid::tetrapyramid(double b)
{
    this->b = b;
}

//Обработка данных
void tetrapyramid::workе_tetrapyramid()
{
    double p;
    volume = (pow(b, 3) * sqrtf(2)) / 12;
    p = volume / 2;
    area = (sqrtf(3) * pow(b, 2)) / 4;
}