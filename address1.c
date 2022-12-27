/* address of array

 output:
the address of the array a[0]:6422280
the address of the array a[1]:6422284
the address of the array a[2]:6422288
the address of the array a[3]:6422292
the address of the array a[4]:6422296

*/

#include<stdio.h>
# define n 5
#define m 5
int main()
{
 int i,j;
 int arr[n][m]={0};
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
  printf("the address of the array a[%d][%d]:%u\n",i,j,&arr[i][j]);
 }
 return 0;

}
