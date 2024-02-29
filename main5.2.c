#include <stdio.h>
#include <stdlib.h>
int sum(int *ptr, int *ptr2){
int result;
result= *ptr +*ptr2;
  return result;

}


int main()
{ int val1,val2,result;
    printf("Enter two values: \n");
    scanf("%d%d",&val1,&val2);
    result=sum(&val1,&val2);
    printf("The summation of the two values is: %d",result);

    return 0;
}
