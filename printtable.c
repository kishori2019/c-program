#include<stdio.h>
#include<conio.h>
int main()
{
	int i,table,n;
	printf("Enter the number for printing table : ");
	scanf("%d",&n);
	printf("\nTable of %d is :\n",n);
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("%d*%d = %d\n",n,i,table);	
	}
	getch();
	return 0;
}
