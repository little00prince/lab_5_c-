#pragma once
#define N 3
#include <math.h>

class figure
{
protected:
    double area;
    double volume;
    static int type;
public:
    double get_area();
    double get_volume();
    static void setType(int e);
    static int getType();
    figure();
    ~figure();
};