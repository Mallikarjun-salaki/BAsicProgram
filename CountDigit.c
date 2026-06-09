#include<stdio.h>
void main()
{

	int a,count=0;
	printf("Enter the number : ");
	scanf("%d",&a);
	printf("The given number is : %d\n",a);
	for(int i=a;i;i=i/10)
	{
		count++;
	}
	
	printf("Count of the given digit : %d\n",count);

}
