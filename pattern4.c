#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>1;j--)
		{
			printf("  ");
		}
		for(j=1;j<=(n-i);j++)
		{
			printf(" %d",j);
		}
		for(j=(n-i-1);j>=1;j--)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	for(i=(n-1);i>=1;i--)
	{
		for(j=i;j>1;j--)
		{
			printf("  ");
		}for(j=1;j<=(n-i);j++)
		{
			printf(" %d",j);
		}
		for(j=(n-i-1);j>=1;j--)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	getch();
	return 0;
}
