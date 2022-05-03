#include <stdio.h>
#include <math.h>
#include "../include/calc6.h"

double newton(int i, int N)
{
    N=1000000;
    double xx,x=2.0;
    double eps=1e-15;

    for(i=0;i<N;i++)
    {
        xx=x-(x*x-4.0)/(2.0*x);

        if(fabs(x-xx)<eps)
        break;
    }

    return xx;
}

double nibun(int i, int N)
{
    N=1000000;
    double x1=1.0, x2=3.0, x3;
    double eps=1e-15;

    for(i=0;i<N;i++)
    {
        x3=(x1+x2)/2;

        if(fabs(x3)<eps)
        break;
    }

    return x3;
}