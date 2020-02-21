#include <stdio.h>

#define mul(a, b) a * b //Wrong 'mul' macro - not enough brackets.

const int CONST = 666;

int main(void)
{
    printf("%i", mul(CONST + 5, 3)); //681 is to be printed, 2013 expected
}
