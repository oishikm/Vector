/*
*	Program to test vector implementation
*	Oishik M :: 23-24/June/2017
*/

#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void show();

int *v;
int size=0;

int main(int argc, char* argv[])
{
	int choice;
	system("clear");
	printf("\nVector: All actions at rear end.\n");
	while(1)
	{
		printf("\n1. PUSH\t2. POP\t3. SHOW\t4. EXIT\nEnter choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: show(); break;
			case 4: return 0;
			default: printf("\nE: Illegal Entry. Try again.\n"); break;
		}
	}
	return 0;
}

void show()
{
	if(size==0)
	{
		printf("\nVector is empty !\n");
	}
	else
	{
		int i;
		printf("\nVector is : ");
		for(i=0;i<size;i++)
		{
			printf("%d ", v[i]);
		}
		printf("\n");
	}
}

void push()
{
	int data;
	size++;
	printf("\nEnter new element : ");
	scanf("%d", &data);
	if(size==1)
	{
		v=(int*)calloc(size,sizeof(int));
	}
	else
	{
		v=(int*)realloc(v,size*sizeof(int));
	}
	if(!v)
	{
		printf("\nE: Push failed ! Element %d ignored !\n", data);
		size--;
	}
	else
	{
		v[size-1]=data;
	}
}

void pop()
{
	if(size==0)
	{
		printf("\nE: Pop failed ! Vector is empty !\n");
	}
	else
	{
		printf("\nPopped element is : %d.\n", v[size-1]);
		if(size==1)
		{
			free(v);
		}
		size--;
	}
}

























