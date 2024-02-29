#include <stdio.h>
#include <stdlib.h>

int main()
{ int var=10;
    printf("Before changing:%d\n",var);
    int *ptr=&var;
    *ptr=20;
    printf("After changing:%d\n",var);
    return 0;
}
