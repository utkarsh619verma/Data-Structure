/*search a number if it is not present*/
#include<stdio.h>
#include<stdbool.h>
#define MAX 5
int main()
{
bool flag;
int a[MAX];
int mx ,mn,num;
int i;

for(i=0;i<MAX;i++)
{
    printf("enter the values of a[%d] ",i);
    scanf("%d",&a[i]);

}

for(i=0;i<MAX;i++)
{
    printf("values of a[%d] = %d\n",i,a[i]);

}

mx=mn=a[0];
 for(i=1;i<MAX;i++)
 {
  if(a[i]>mx)
  {
    mx=a[i];
  }
  if(a[i]<mn)
  {
    mn=a[i];
  }
 }
 printf("values of min=%d and max=%d",mn,mx);

 printf("enter the number to be searched in array\n:");
 scanf("%d",&num);

 for(i=0;i<MAX;i++)
 {
    if(a[i]==num)
    {

    printf("enter")
 }

return 0;
}
