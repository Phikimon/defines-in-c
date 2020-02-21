#include <stdio.h>

//#define TEST_MODE
//#define SILENT_MODE

int main(void)
{
#ifndef SILENT_MODE

#ifdef TEST_MODE
    printf("Test mode");
#else //TEST_MODE
    printf("Normal mode");
#endif //TEST_MODE

#endif //SILENT_MODE
    return 0;
}
