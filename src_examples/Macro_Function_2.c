#include <stdio.h>

#define sqrFunc(varType)          \
varType sqr_##varType(varType a); \
                                  \
varType sqr_##varType(varType a)  \
{                                 \
    return a * a;                 \
};

sqrFunc(double)
sqrFunc(int)
sqrFunc(char)

#undef sqrFunc

int main(void)
{
    printf("%i", sqr_int(5));
    return 0;
}
