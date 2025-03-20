#include<stdio.h>
int main()
{
    int n,i,rev,num,digit;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Reversed elements: ");
    for(i=0;i<n;i++) 
	{
        num=arr[i];
        rev=0;
        while(num>0) 
		{
            digit=num%10;
            rev=rev*10+digit;
            num=num/10;
        }
        printf("%d ",rev);
    }
    return 0;
}
