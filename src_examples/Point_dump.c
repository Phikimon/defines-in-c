#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

enum { MAX_STRING_LENGTH = 256 };

struct Point
{
    double x;
    double y;
};

void pointDump_(struct Point* point, const char pointName[MAX_STRING_LENGTH])
{
    assert(point);

    printf("struct Point '%s' [%p]\n", pointName, point);
    printf("{\n"
           "\tx = %lg\n"
           "\ty = %lg\n"
           "}\n", point->x, point->y);
}
#define pointDump(pnt) { assert(strlen(#pnt) <= MAX_STRING_LENGTH); pointDump_(pnt, #pnt); }

int main(void)
{
    struct Point* mySuperPoint = (struct Point*)calloc(1, sizeof(*mySuperPoint));
    pointDump(mySuperPoint);
    return 0;
}
