#include<stdio.h>
#include<conio.h>
int stack[10],size,choice,n,top=-1,i;
void push(void);
void pop(void);
void display(void);
int main()
{
clrscr();
printf("Enter size of the array :\n");
scanf("%d",&size);
do
{
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:printf("Exit");
break;
default:printf("Invalid choice\n");
break;
}
}while(choice!=4);
return 0;
}
void push()
{
if(top>=size-1)
{
printf("Stack is full");
}
else{
top++;
printf("Enter the number\n");
scanf("%d",&n);
stack[top]=n;
}
}
void pop()
{
if(top<0)
{
printf("Stack underflow\n");
}
else
{
top--;
}
}
void display()
{
if(top<0)
{
printf("Stack is empty\n");
}
else{
for(i=0;i<=top;i++)
{
printf("%d\n",stack[i]);
}
}
}