#include<stdio.h>
#include<conio.h>
#define MAX 5
int q[MAX],front=-1,rear=-1,op,num,i;
void insert(void);
void deletion(void);
void display(void);
void main()
{
clrscr();
do
{
printf("\nmain menu\n");
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
case 4:exit(0);
default:printf("Invalid choice\n");
break;
}
}while(op!=4);
getch();
}
void insert()
{
if((front==0&&rear==MAX-1)||(front==rear+1))
{
printf("Queue is full \n");

}
else{
printf("Enter element:\n");
scanf("%d",&num);
if(front==-1&&rear==-1)
{
front=rear=0;
}
else if(rear==MAX-1)
{
rear=0;
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
printf("queue is empty\n");
}
else if(front==MAX-1)
{
front=0;
q[front]=num;
}
else
{
q[front]=num;
front++;
}
}
void display()
{
if(front==rear==-1)
{
printf("Queue is empty\n");
}
printf("\n elements in the circular queue is:");
if(rear>=front)
{
for(i=front;i<=rear;i++)
printf("%d", q[i]);
}
else
{
for(i=front;i<MAX-1;i++)
printf("%d",q[i]);
for(i=0;i<=rear;i++)
printf("%d",q[i]);
}
}



