#include<stdio.h>
#define col1 3
#define row1 3
#define col2 3
#define row2 3

int main()
{
 int a[10][10],b[10][10],c[10][10],i,j,k;

 for(i=0;i<row1;i++)
 {
    for(j=0;j<col1;j++)
    {
     printf("enter the terms in the matrix1[%d][%d]:",i,j);
     scanf("%d",&a[i][j]);
    }

  }
  for(i=0;i<row2;i++)
 {
    for(j=0;j<col2;j++)
    {
     printf("enter the terms in the matrix2[%d][%d]:",i,j);
     scanf("%d",&b[i][j]);
    }

  }
  for(i=0;i<row1;i++)
 {
    for(j=0;j<col2;j++)
    {
        for(k=0;k<col1;k++)
        {

        c[i][j]=0;
        c[i][j]=c[i][j]+a[i][j]*b[i][j];}
    }
}

    for(i=0;i<row1;i++)
 {
    for(j=0;j<col2;j++)
    {
       printf("c[%d][%d]=%d\n",i,j,c[i][j]);
    }
    printf("\n");
}
return 0;
}
