//insertion at the beginning
#include<stdio.h>

struct node{
 int data;
 struct node *link;
};

int main()
{
 struct node *start,*temp,*r;
 start= NULL;

 int x=1,value;
 printf("inserting at the end in linked list:\n");

 while(x==1)
 {
  printf("enter the value to be inserted:\n");
  scanf("%d",&value);

  r=(struct node *)malloc(sizeof(struct node));
  r->data =value;

  if(start==NULL)
  {
   r->link =start;
   start=r;
  }
  else
  {
    r->link = start;
    start=r;
  }
 printf("want to enter more values in linked list? enter 1\n");
 scanf("%d",&x);

 }

 int count=0;
 temp=start;
 while(temp!=NULL)
 {
  printf("%d-> ",temp->data);
  temp=temp->link;
  count++;
 }
 printf("\n");

 printf("%d are the number nodes in the linked list\n",count);

 return 0;





}


