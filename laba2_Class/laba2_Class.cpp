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
    int min, max, i;
    double sides[N], v = 0, s = 0;
    cube one;
    ball two = NULL;
    tetrapyramid three = NULL;
    setlocale(LC_ALL, "Rus");
    //Полный цикл программы
    do {
        printf("\n1-Куб\n2-Шар\n3-Правильный тетраид\n--------------------\nВыберите фигуру:");
        min = 1; max = 3;
        two.setType(block_int(min, max));
        //Ввод и обработка
        switch (two.getType())
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
            two = ball(block_double());
            two.worke_ball();
            break;
        case 3:
            printf("Длина стороны правильного тетраэдра:");
            three = tetrapyramid(block_double());
            three.workе_tetrapyramid();
            break;
        default:;
        }
        //Вывод результатов
        printf("Фигура: ");
        switch (one.getType())
        {
        case 1:
            printf("Прямоугольный параллелепипед");
            printf("\nДиагональ: %f", one.getDiagonal());
            s = one.get_area();
            v = one.get_volume();
            break;
        case 2:
            printf("Шар");
            printf("\nДиаметр: %f", *two.getD());
            s = two.get_area();
            v = two.get_volume();
            break;
        case 3:
            printf("Правильный тетраэдр");
            s = three.get_area();
            v = three.get_volume();
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