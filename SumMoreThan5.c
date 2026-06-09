#include<stdio.h>
void main()
{
	int a,sum=0,r,temp;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("\nThe given number : %d\n",a);
	for(int i=a;i;i=i/10)
	{

	

		r=i%10;
		if(r>5)
		{
			sum=sum+r;
		}

	}
	printf("Sum of more than 5 number in Digit : %d\n", sum);


}
