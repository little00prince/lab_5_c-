#include "ball.h"

ball::ball()
{

}

//�����������
ball::ball(double r)
{
    this->r = r;
    d = 0;
}

//��������� ������
void ball::worke_ball()
{
    d = r * 2;
    area = 4 * 3.14 * pow(r, 2);
    volume = 4 / 3 * 3.14 * pow(r, 3);
}

//����� ��������
double* ball::getD()
{
    return &d;
}

//���������� ���������� ���������
double ball::operator+(double s)
{
    return area + s;
}
