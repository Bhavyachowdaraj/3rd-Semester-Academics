#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define max_size 5
int stack[max_size],top=-1,flag=1;
int i,temp,item,rev[max_size],num[max_size];
void push();
void pop();
void display();
void pali();
int main()
{
	int choice;
	printf("\n\n-----STACK OPERATION-----\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.palindrome\n");
	printf("4.display\n");
	printf("5.exit\n");
	printf(" ");
	while (1)
	{
		printf("Enter your choice :\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : push();
				 break;
			case 2 : pop();
				 if (flag)
					 printf("\n The poped element : %d\t",item);
				 temp = top;
				 break;
			case 3 : pali();
				 top = temp;
				 break;
			case 4 : display();
				 break;
			case 5 : exit(0);
				 break;
			default : printf("\n Invalid choice:\n");
				  break;
		}
	}
//return 0;
}
void push()
{
	if (top == (max_size-1))
	{
		printf("\n Stack overflow:");
	}
	else
	{
		printf("Enter the element to be inserted :\t");
		scanf("%d",&item);
		top = top+1;
		stack[top] = item;
	}
	temp = top;
}
void pop()
{
	if(top == -1)
	{
		printf("Stack Underflow:");
		flag = 0;
	}
	else
	{
		item = stack[top];
		top = top-1;
	}
}
void pali()
{
	i=0;
	if(top == -1)
	{
		printf("Push some elements into the stack first \n");
	}
	else 
	{
		while(top != -1)
		{
			rev[top] = stack[top];
			pop();
		}
		top = temp;
		for(i=0;i<=temp;i++)
		{
			if(stack[top--] == rev[i])
			{
				if(i==temp)
				{
					printf("Palindrome\n");
					return;
				}
			}
		}
		printf("Not Palindrome \n");
	}
}
void display()
{
	int i,
	    top = temp;
	if(top == -1)
	{
		printf("\n Stack is Empty:");
	}
	else
	{
		printf("\n The stack elements are : \n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}


	
