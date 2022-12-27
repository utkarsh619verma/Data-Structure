#include<stdio.h>
# define n 5

int main()
{
 int a[n]={12,45,78,96,63},b[n]={78,48,96,52,65},c[n],d[n],i,j;
 int sum=0;

 for(i=0;i<5;i++)
 {
  c[i]=a[i] + b[i];
  d[i]=a[i] * b[i];

    printf("sum=%d\n",c[i]);
    printf("product=%d\n",d[i]);
 }
 return 0;

}
