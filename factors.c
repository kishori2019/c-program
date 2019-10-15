#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the number ");
	scanf("%d",&n);
	printf("Factor of %d are ",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			
			printf("%d ",i);
		}
	}
	getch();
	return 0;
}
