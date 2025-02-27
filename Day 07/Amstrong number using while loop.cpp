#include <stdio.h>
#include <math.h>
int main() 
{
    int num,originalNum,result=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalNum =num;
    while (num!= 0) 
	{
        result=result+pow(num%10,3);
        num=num/10;
    }
    if (originalNum==result) 
	{
        printf("%d is an Armstrong number.\n",originalNum);
    } 
	else 
	{
        printf("%d is not an Armstrong number.\n",originalNum);
    }
    return 0;
}
