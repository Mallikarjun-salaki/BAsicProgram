#include<stdio.h>
void main()
{

	int num,r,rev=0,temp;
	//scanf("%d",&num);
	
	printf("Enter random numbere : ");
	scanf("%d",&num);

	for(temp=num;temp;temp/=10)
	{
		r=temp%10;
		rev=rev*10+r;
		
	}

	printf("\nReversed Number = %d\n",rev);



}
