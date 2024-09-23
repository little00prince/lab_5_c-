#include "figure.h"

class ball : public figure
{
    double r;
    double d;
public:
    ball(double r);
    void worke_ball();
    double* getD();
    double operator +(double s);
};
