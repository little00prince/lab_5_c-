#pragma once
#include "figure.h"

class triangular_prism : public figure
{
    double h;
    double side[N];
public:
    triangular_prism();
    triangular_prism(double side[]);
    void work�_triangular_prism();
};