#include<stdio.h>
 #include<conio.h>
#include<stdlib.h>

int x,stack[100],i,top,n,choice;
void push(void);
void pop(void);
void peak(void);
void display(void);
void main()
{
clrscr();
top=-1;
printf("ENTER THE SIZE OF Stack\n");
scanf("%d",&n);
printf("1.push\n2.pop\n3.peak\n4.display\n5.exit\n");
do
{
printf("ENTER YOUR Choice\n");
scanf("%d",&choice);
switch(choice)
{
     case 1:
     {
	  push();
	  break;
}
case 2:{
pop();
break;
}
case 3:{
peak();
break;
}
case 4:{
display();
break;
}
case 5:{
printf("EXIT POINT\n");
break;
}
default:{
printf("enter your valid choice:");
}
}
}
while(choice!=5);


return 0;
}

void push()
{
if(top>n-1)
{
printf("STACK IS OVERFLOW\n");

}

else
{
printf("ENTER A VALUE TO BE PUSHED:\n");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("STACK IS underflow\n");
}
else
{
printf("THE POPED ELEMENT is %d\n",stack[top]);
top--;
}
}
void peak()
{
printf("THE TOP ELEMENT OF THE STACK IS : %d\n",x);
}
void display()
{
if(top==0)
{
printf("THE ELEMENT IN THE STACK ARE:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
else
{
printf(" THE STACK IS EMPTY\n");
}
}
getch();
