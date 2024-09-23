#pragma once
#include "figure.h"

class cube : public figure
{
    friend int view(cube& one);
    double diagonal;
    double sides[N];
public:
    cube();
    cube(double sides[]);
    void worke_cube();
    double& getDiagonal();
};
