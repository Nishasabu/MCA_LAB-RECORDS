#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=0,FirstArray[20],SecondArray[20],m,n,SortedArray[40];
clrscr();
printf("Enter the size of FirstArray:");
scanf("%d",&m);
printf("Enter sorted elements of FirstArray(Ascending Order):\n");
for(i=0;i<m;i++)
{
scanf("%d",&FirstArray[i]);
}
printf("Enter the size of SecondArray:");
scanf("%d",&n);
printf("Enter sorted elements of SecondArray(Ascending Order):\n");
for(j=0;j<n;j++)
{
scanf("%d",&SecondArray[j]);
}
i=0;
j=0;
while(i<m &&j<n)
{
if(FirstArray[i]<SecondArray[j])
{
SortedArray[k]=FirstArray[i];
i++;
}
else
{
SortedArray[k]=SecondArray[j];
j++;
}
k++;
}
while(i<m)
{
SortedArray[k]=FirstArray[i];
i++;
k++;
}
while(j<n)
{
SortedArray[k]=SecondArray[j];
j++;
k++;
}
printf("\n After merging:\n");
for(i=0;i<m+n;i++)
{
printf("\n %d",SortedArray[i]);
}
getch();
}

