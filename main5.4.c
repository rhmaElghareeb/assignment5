#include <stdio.h>
#include <stdlib.h>
  void sortingFunc(int arr[],int size){
   int i, j,temp;
   for(i=0; i< size-1; i++){
     for(j=0;j<(size-1)-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           }
       }
   }
}

int main()
{ int i;
    printf("Enter your array values:\n");
    int arr[5];
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    sortingFunc(arr,sizeof(arr)/sizeof(arr[0]));
    printf("The array after sorting:\n");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
