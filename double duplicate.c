//find the duplicate element in array

#include<stdio.h>
# define MAX 5
int main()
{
int a[MAX];
int mx ,mn;
int i,j,count=0;

for(i=0;i<MAX;i++)
{
    printf("enter the values of a[%d] ",i);
    scanf("%d",&a[i]);

}

for(i=0;i<MAX;i++)
{
    printf("values of a[%d] = %d\n",i,a[i]);

}

for(i=0;i<MAX;i++)
{
 for(j=i+1;j<MAX;j++)
 {
  if (a[i]==a[j])
  {
   printf("yes duplicate is %d\n",a[i]);
   count++;

  }

 }

}
printf("%d are the number of duplicates\n:",count);
return 0;
}
