#include<stdio.h>
#define MAX 5
int main()
{
int a[MAX];

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
return 0;
}
