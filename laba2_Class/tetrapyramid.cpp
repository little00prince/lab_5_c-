#include "tetrapyramid.h"

tetrapyramid::tetrapyramid()
{

}

//�����������
tetrapyramid::tetrapyramid(double b)
{
    this->b = b;
}

//��������� ������
void tetrapyramid::work�_tetrapyramid()
{
    double p;
    volume = (pow(b, 3) * sqrtf(2)) / 12;
    p = volume / 2;
    area = (sqrtf(3) * pow(b, 2)) / 4;
}