/*
*	Program to test vector implementation
*	Oishik M
*/

#include<stdio.h>
#include<stdlib.h>

int *v;
int size=0;

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
