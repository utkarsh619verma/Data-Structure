#include<stdio.h>
//first method of tower of hanoi
int main(void)
{
    int n=3;
    char source='A',dest='C',temp='B';
    toh(n,'A','B','C');
    tofh(n,source,temp,dest);
    return 0;
}
//first method of tower of hanoi
void toh(int n,char startpin,char endpin, char workpin)
{
    if(n>0)
    {
        toh(n-1,startpin,workpin,endpin);
        printf("move disk from %c to %c\n",startpin,endpin);
        toh(n-1,workpin,endpin,startpin);
    }
}
//method 2 of tow
void tofh(int ndisk,char source,char temp,char dest)
{

    if(ndisk== 1)
    {
        printf("move disk %d from %c to %c\n",ndisk,source,dest);
    }
    else
    {
    tofh(ndisk-1,temp,source,dest);
    printf("move disk %d from %c to %c\n",ndisk,source,dest);
    tofh(ndisk-1,temp,source,dest);
    }

}
