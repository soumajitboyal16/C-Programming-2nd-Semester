#include<stdio.h>
int main()
{
	int n=4;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
