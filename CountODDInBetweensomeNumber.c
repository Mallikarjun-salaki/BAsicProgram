#include<stdio.h>
void main()
{
	int a,count=0,r,n,m;
	printf("Enter the Number : ");
	scanf("%d",&a);
	printf("\nThe given numbe is : %d\n",a);
	printf("Enter random single digit numbere n : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter random single digit numbere  m : ");
	scanf("%d",&m);
	for(int i=a;i;i=i/10)
	{
		r=i%10;
		if(r%2!=0)
		{
			if(r>n && r<m)
			count++;
		}
	}
	printf("Count of Odd number if it is grater than n and m : %d\n",count);

}

