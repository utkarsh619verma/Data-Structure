//revering of a linked list
#include<stdio.h>

struct node{
 int data;
 struct node *link;
};

int main()
{
 struct node *start,*temp,*r,*ptr,*prev,*next;
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
   temp=start;
   while(temp->link!=start)
   {
    temp=temp->link;
   }
   r->link=start;
   temp->link=r;
  }
 printf("want to enter more values in linked list? enter 1\n");
 scanf("%d",&x);

 }

 int count=0;
 ptr=start;
 prev=NULL;
 while(ptr!=NULL)
 {
     next=ptr->link;
     ptr->link=prev;
     prev=ptr;
     ptr=next;
    printf("%d-> ",ptr->data);

  count++;
 }
 printf("\n");

 printf("%d are the number nodes in the linked list\n",count);

 return 0;





}


