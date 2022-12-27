#include<stdio.h>
#define n 5
int main()
{
 int i,j,sum=0;
 float avg;
 int arr[n];
 //printf("enter the number of students:")
 for(i=0;i<n;i++)
  {
  printf("enter your marks here:");
  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
   sum=sum+arr[i];
  }
  printf("the sum of the marks is:%d \n",sum);
  avg=sum/n;
  printf("the avg of the marks is:%f",avg);


 return 0;
}
