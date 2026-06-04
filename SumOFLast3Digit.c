#include<stdio.h>
void main()
{
	int a,r,sum=0;
	printf("enter the number : ");
	scanf("%d",&a);
	printf("\nThe given number is : %d\n",a);
	for(int i=1;i<4;i++)
	{
		r=a%10;
		sum=sum+r;
		a=a/10;
	}
	printf("The sum of last 3 digit is = %d\n",sum);


}
