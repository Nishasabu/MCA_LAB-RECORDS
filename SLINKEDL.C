#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head,* newnode,*temp,*tail;
void create();
void insertbegin();
void insertend();
void insertpos();
void deletebegin();
void deleteend();
void deletepos();
void display();
void main()
{
int op;
clrscr();
head=NULL;
do
{
printf("\n 1.creation\n 2.insert beginning\n 3.insert end\n 4.insert at specified position\n 5.delete beginning\n 6.delete end\n 7.delete at specified position\n 8.display\n 9.exit\n");
scanf("%d",&op);
switch(op)
{
case 1:create();
break;
case 2:insertbegin();
break;
case 3:insertend();
break;
case 4:insertpos();
break;
case 5:deletebegin();
break;
case 6:deleteend();
break;
case 7:deletepos();
break;
case 8:display();
break;
case 9:exit(0);
break;
default:
printf("invalid choice");
}
}while(op!=9);
getch();
}
void create()
{
int value;
char choice;
do
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data:\n");
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
if(head==NULL)
{
head=tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
printf("\n Y to continue N to stop:");
scanf("%c",&choice);
}
while(choice=='Y');
}
void insertbegin()
{
int value;
char choice;
if(head==NULL)
{
printf("\nlist is e	mpty");
}
else{
do{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data:\n");
scanf("%d",&value);
newnode->data=value;
newnode->next=head;
head=newnode;
printf("\n Y to continue N to stop:");
scanf("%c",&choice);
}
while(choice=='Y');
}
}
void insertend()
{
int value;
char choice;
if(head==NULL)
{
printf("\nlist is empty");
}
else
{
do{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data");
scanf("%d",&value);
newnode->data=value;
tail->next=newnode;
newnode->next=NULL;
tail=newnode;
printf("\n Y to continue N to stop");
scanf("%c",&choice);
}
while(choice=='y');
}
}
void insertpos()
{
int value,i,pos;
char choice;
if(head==NULL)
{
printf("\n list is empty");
}
else
{
do{
newnode=(struct node *)malloc(sizeof(struct node));
printf("\n Enter Data:");
scanf("%d",&value);
printf("\n Enter the position to insert data:");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
}
newnode->data=value;
newnode->next=temp->next;
temp->next=newnode;
printf("\n Y to continue N to stop");
scanf("%c",&choice);
}
while(choice=='Y');
}
}
void deletebegin()
{
char choice;
if(head==NULL)
{
printf("\n list is empty\n");
}
else{
do{
temp=head;
head=head->next;
temp->next=NULL;
printf("\Y to continue and N to stop");
scanf("%c",&choice);
}
while(choice=='Y');
}
}
void deleteend()
{
char choice;
if(head==NULL)
{
printf("\n list is empty");
}
else{
do{
temp=head;
while(temp->next!=tail)
{
temp=temp->next;
}
temp->next=NULL;
tail=temp;
printf("\n Y to continue N to stop");
scanf("%c",choice);
}
while(choice=='Y');
}
}
void deletepos()
{
int i,pos;
char choice;
if(head==NULL)
{
printf("\n list is empty");
}
else{
do{
printf("\n starting position is 0 \n Enter position :");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
}
temp->next=temp->next->next;
printf("\n Y to continue N to stop");
scanf("%c",&choice);
}
while(choice=='Y');
}
}
void display()
{
if(head==NULL)
{
printf("\n list is empty\n");
}
else
{
temp=head;
printf("\n Elements are:\n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
