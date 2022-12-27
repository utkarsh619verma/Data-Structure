/* max and min element in array */
#include<stdio.h>
#define MAX 5
int main()
{
int a[MAX];
int mx ,mn;
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

return 0;
}
