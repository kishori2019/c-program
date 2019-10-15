#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	float sum=0;
	printf(" Enter the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(1/i);
	printf("(1/%d) ",i);
	}
	printf("\nSum=%f",sum);
	getch();
}
