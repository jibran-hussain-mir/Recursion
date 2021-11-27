//Recursion

#include<stdio.h>
#include<stdlib.h>

// Factorial of a Number
int fact(int n)
	{
		int temp;
		if(n==0)
			return 1;
		else
			{
				temp=n*fact(n-1);
				return temp;
			}
	}

int binary(int n)
	{
		if(n/2 == 0)
			printf("%d ",n%2) ;
		else
			{
				binary(n/2);
				printf("%d ",n%2);
			}
			printf("\n");
			
	}

void TOH(int n,int A,int B,int C)
	{
		if(n>0)
			{
				TOH(n-1,A,C,B);
				printf("(%d,%d)\n",A,C);
				TOH(n-1,B,A,C);
			}
	}


int main()
	{
		int x=2;
	 int	factorial=fact(x);
		printf("Factorial of %d is : %d \n",x,factorial);
		binary(x);
		TOH(4,1,2,3);
		
	}
