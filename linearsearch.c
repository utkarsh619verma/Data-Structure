#include<stdio.h>
#define n 5


int main()
{
 int arr[n],i,search;
 for(i=0;i<n;i++)
 {
    printf("enter the elements at array position arr[%d]:",i);
    scanf("%d",&arr[i]);
 }

     printf("enter the element to be searched:");
     scanf("%d",&search);

 for(i=0;i<n;i++)
 {
  if(arr[i]==search)
  {
   printf("%d is found at position %d \n",search,i);
   break;
  }
 }
 if(i==n)
 {
  printf("%d is not found",search);
 }

}
