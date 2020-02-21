#include <stdio.h>

//#define DUMB_SQR

#ifdef DUMB_SQR
double sqrD(double a)
{
    return a * a;
};

int sqrI(int a)
{
    return a * a;
};

char sqrC(char a)
{
    return a * a;
};
#else

#define sqr(a) ((a)*(a))

#endif

int main(void)
{
    printf("%i", sqr(5));
    return 0;
}
