#define MAX 3
#include<stdio.h>
int top=-1,stack[MAX];
void main()
{
int choice;
clrscr();
do
{
 printf("\n1.push\n2.pop\n3.display");
 printf("\nEnter choice: ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: push();
	 break;
 case 2: pop();
	 break;
 case 3: display();
	 break;
 default: exit(0);
 }
}while(1);
getch();
}
push()
{
 if(top<MAX-1)
 {
  printf("\nInput element: ");
  scanf("%d",&stack[top]);
  top++;
 }
 else
  printf("\nStack Overflow");
}

display()
{
 int i;
 if(top==-1)
  printf("\nStack empty");
 else
  {
  for(i=top;i>=0;--i)
   printf("%d ",stack[i]);
  }
}

pop()
{
 int temp;
 if(top==-1)
  printf("\nStack Underflow");
 else
 {
  temp=stack[top];
  printf("\npopped element is %d",temp);
  top--;
 }
}



