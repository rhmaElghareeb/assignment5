#include <stdio.h>
#include <stdlib.h>
 void scalar_multiply(int arr1[],int arr2[],int result[]){
     int i;
     for(i=0;i<10;i++){
        result[i]= arr1[i]* arr2[i];

     }

 }




int main()
{ int arr1[10]={1,2,3,4,5,6,7,8,9,0};
  int arr2[10]={2,4,6,8,10,20,30,40,100,2};
  int result[10];
  int i;

  scalar_multiply(arr1,arr2,result);
  printf("The result array is:\n");
  for(i=0;i<10;i++){
    printf("%d\t",result[i]);
  }


    return 0;
}
