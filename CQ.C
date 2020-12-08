#include<stdio.h>
#include<conio.h>
#define MAX 3
int q[MAX],front=0,rear=0,op,num,i;
void insert(void);
void deletion(void);
void display(void);
void main()
{
clrscr();
do
{
printf("1.Insert\n");
printf("2.deletion\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter choice:\n ");
scanf("%d",&op);
switch(op)
{
case 1:insert();
break;
case 2:deletion();
break;
case 3:display();
break;
default:printf("Invalid choice");
break;
}
}while(op!=4);
}
void insert()
{
if((front==1&&rear==MAX)||(front==rear+1))
{
printf("Queue is full \n");

}
else{
printf("Enter element:\n");
scanf("%d",&num);
if(front==0&&rear==0)
{
front=rear=1;
}
else if(rear==MAX)
{
rear=1;
}
else
{
rear=rear+1;
}
q[rear]=num;
}
}
void deletion()
{
if(front==-1&&rear==-1)
{
printf("queue is empty");
}
else if(front==rear)
{
q[front]=num;
front=rear=0;
}
else if(front==MAX)
{
q[front]=num;
front=1;
}
else
{
q[front]=num;
front++;
}
}
void display()
{
printf("Queue is\n");
if(front<=rear)
{
for(i=0;i<=rear;i++);
printf("%d",q[i]);
for(i=front;i<MAX;i++)
printf("%d",q[i]);
}
}


