#include <stdio.h>

#define Govnocode 

const int CONST1 = 666;
const int CONST2 = 678;

int main(void)
{
    char c = '\0';
    while (!scanf("%c", &c));
    switch (c)
    {               Govnocode //Replace with macros
        case '^':
            {
                printf("%d", CONST1 ^ CONST2);
            }; break;
        case '+':
            {
                printf("%d", CONST1 + CONST2);
            }; break;
        case '-':
            {
                printf("%d", CONST1 - CONST2);
            }; break;
        case '*':
            {
                printf("%d", CONST1 * CONST2);
            }; break;
        case '/':
            {
                printf("%d", CONST1 / CONST2);
            }; break;
        default: return 1;
    }
    return 0;
}
