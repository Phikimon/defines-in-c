#include <stdio.h>

const int CONST1 = 666;
const int CONST2 = 678;

int main(void)
{
    char c = '\0';
    while (!scanf("%c", &c));

#define caseOperator(operChar, oper)      \
case operChar:                            \
    {                                     \
        printf("%d", CONST1 oper CONST2); \
    }; break;

    switch (c)
    {
  	    caseOperator('^', ^);
  	    caseOperator('+', +);
  	    caseOperator('-', -);
  	    caseOperator('*', *);
        caseOperator('/', /);
        default: return 1;
    }

#undef caseOperator
    return 0;
}
