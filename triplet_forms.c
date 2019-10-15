#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the number for printing table : ");
	scanf("%d",&n);
	printf("Triplet forms are \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				if(((i*i)+(j*j))==(k*k))
				{
					printf("%d ,%d ,%d\n",i,j,k);
				}
			}
		}			
	}
	getch();
	return 0;
}
