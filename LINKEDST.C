#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node{
int data;
struct node *link;
};
struct node *top;
void main()
{
int op;
top=NULL;
do{
printf("\n linked stack operation\n");
printf("\n 1.push\n 2.pop\n 3.disp[ay\n 4.exit\n");
scanf("%d",&op);
switch(op)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid choice\n");
break;
}
}while(op!=4);
}
getch();
void push()
{
int item;
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n overflow condition\n");
}
else
{
printf("Enter the value:\n");
scanf("%d",&item);
if(top==NULL)
{
newnode->data=item;
newnode->link=NULL;
top=newnode;
}
else
{
newnode->data=item;
newnode->link=top;
top=newnode;
}
printf("\item is pushed\n");
}
}
void pop()
{
if(top==NULL)
{
printf("underflow");
}
else{
printf("%d",top->data);
top=top->link;
}
}
void display()
{
struct node *temp;
temp=top;
if(top==NULL)
{
printf("overflow");
}
else{
printf("Elements are:\n");
while(temp!=0)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}
}
