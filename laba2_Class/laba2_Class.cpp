#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "cube.h"
#include "ball.h"
#include "tetrapyramid.h"
#include <string>

int block_int(int min, int max);
double block_double();

int main()
{
    int min, max, i, f, j = 0, k = 0;
    double sides[N], v, s;
    cube one;
    ball two[N][N];
    tetrapyramid three[N];
    setlocale(LC_ALL, "Rus");
    //Полный цикл программы
    do {
        printf("\n1-Куб\n2-Шар\n3-Правильный тетраид\n--------------------\nВыберите фигуру:");
        min = 1; max = 3;
        three[j].setType(block_int(min, max));
        //Ввод и обработка
        switch (three[j].getType())
        {
        case 1:
            printf("Длина сторон прямоугольного параллелепипеда:");
            for (i = 0; i < 3; i++)
            {
                sides[i] = block_double();
            }
            one = cube(sides);
            one.worke_cube();
            break;
        case 2:
            printf("Радиус шара:");
            two[j][k] = ball(block_double());
            two[j][k].worke_ball();
            break;
        case 3:
            printf("Длина стороны правильного тетраэдра:");
            three[j] = tetrapyramid(block_double());
            three[j].workе_tetrapyramid();
            break;
        default:;
        }
        //Вывод результатов
        printf("Фигура: ");
        switch (one.getType())
        {
        case 1:
            switch (view(one))
            {
            case 1:
                printf("Куб");
                break;
            case 2:
                printf("Прямоугольный параллелепипед");
                break;
            default:;
            }
            printf("\nДиагональ: %f", one.getDiagonal());
            s = one.get_area();
            v = one.get_volume();
            break;
        case 2:
            printf("Шар");
            printf("\nДиаметр: %f", *two[j][k].getD());
            s = two[j][k].get_area();
            v = two[j][k].get_volume();
            break;
        case 3:
            printf("Правильный тетраэдр");
            s = three[j].get_area();
            v = three[j].get_volume();
            break;
        default:;
        }
        printf("\nПлощадь: %f", s);
        printf("\nОбъем: %f\n", v);
        printf("\nНажмите ESC для выхода или любую клавишу для продолжения\n");
    } while (_getch() != 27);
}
//Защита на целые числа
int block_int(int min, int max)
{
    int type, f = 1;
    do {
        if (f != 1)
        {
            printf("Такого варианта нет. Попробуйте ещё раз: ");
        }
        while (scanf("%d", &type) != 1)
        {
            while (getchar() != '\n');
            printf("Ошибка. Попробуйте ещё раз: ");
        }
        f = 0;
        while (getchar() != '\n');
    } while (type<min || type>max);
    printf("\n");
    return type;
}
//Защита на дробные числа
double block_double()
{
    int f = 1;
    double e;
    do {
        if (f != 1)
        {
            printf("Такого варианта нет. Попробуйте ещё раз: ");
        }
        while (scanf("%lf", &e) != 1)
        {
            while (getchar() != '\n');
            printf("Ошибка. Попробуйте ещё раз: ");
        }
        f = 0;
        while (getchar() != '\n');
    } while (e <= 0);
    return e;
}
//Дружественная функция
int view(cube& one)
{
    if (one.sides[0] == one.sides[1] && one.sides[1] == one.sides[2])
        return 1;
    else return 2;
}