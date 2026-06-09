#include<stdio.h>
void main()
{
	int a,count=0,r;
	printf("Enter the Number : ");
	scanf("%d",&a);
	printf("\nThe given numbe is : %d\n",a);
	for(int i=a;i;i=i/10)
	{
		r=i%10;
		if(r%2!=0)
			count++;
	}
	printf("Count of Odd number from given number is : %d\n",count);

}

