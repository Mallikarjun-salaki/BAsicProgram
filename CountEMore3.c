#include<stdio.h>
void main()
{
	int a,count=0,r,n;
	printf("Enter the Number : ");
	scanf("%d",&a);
	printf("\nThe given numbe is : %d\n",a);
	printf("Enter random single digit numbere : ");
	scanf("%d",&n);
	printf("\n");
	for(int i=a;i;i=i/10)
	{
		r=i%10;
		if(r%2!=0)
		{
			if(r>n)
			count++;
		}
	}
	printf("Count of Odd number if it is grater than 3 : %d\n",count);

}

