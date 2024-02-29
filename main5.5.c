#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y=2,z=3;
    int *px=&x, *py=&y, *pz=&z;
     printf("%d\t%d\t%d\n",x,y,z);
      printf("%d\t%d\t%d\n",px,py,pz);
       printf("%d\t%d\t%d\n",*px,*py,*pz);
       printf("Swapping pointers:\n");

       pz=px;
       px=py;
       py=pz;

    printf("%d\t%d\t%d\n",x,y,z);
      printf("%d\t%d\t%d\n",px,py,pz);
       printf("%d\t%d\t%d\n",*px,*py,*pz);
    return 0;
}
