#include <stdio.h>
#include <math.h>
#include "calc.h"

int main()
{
    int i, N=1000000;
    double x,xx;
    double x1=1.0, x2=3.0, x3;
    double eps=1e-15;

    /*toi6 newton*/
    xx=newton(i,N);

    printf("newton  x=%.5lf\n",xx);

    /*toi6 nibun*/
    x3=nibun(i,N);

    printf("nibun  x=%.5lf\n",x3);

    return 0;
}