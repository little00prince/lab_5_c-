#include "triangular_prism.h"

triangular_prism::triangular_prism()
{
    for (int i = 0; i < N; i++)
        this->side[i] = 0;
}

//�����������
triangular_prism::triangular_prism(double side[])
{
    for (int i = 0; i < N; i++)
        this->side[i] = side[i];
}

//��������� ������
void triangular_prism::work�_triangular_prism()
{
    double p;
    h = 1;
    p = (side[0] + side[1] + side[2]) / 2;
    area = sqrtf(p * (p - side[0]) * (p - side[1]) * (p - side[2])) + h * (side[0] + side[1] + side[2]);
    volume = sqrtf(p * (p - side[0]) * (p - side[1]) * (p - side[2])) * h;
    if ((side[0] - side[1] - side[2]) < 0 || (side[1] - side[0] - side[2]) < 0 || (side[2] - side[0] - side[1]) < 0)
    {
        throw "����������� ������ �� ����������";
    }
    if ((side[0] - side[1] - side[2]) == 0 || (side[1] - side[0] - side[2]) == 0 || (side[2] - side[0] - side[1]) == 0)
    {
        throw "����������� ������ �� ����������";
    }
}
