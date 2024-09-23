#include "figure.h"

class ball : public figure
{
    double r;
    double d;
public:
    ball();
    ball(double r);
    void worke_ball();
    double* getD();
};
