/******** C program to print the below pattern

  a
  b c
  d e f 
  g h i j 
  k l m n o

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",96+k);
			k++;
		}
		printf("\n");
	}
	return 0;
}

