#include<stdio.h>
int main()
{
	int i=0,sum=0,a[10];
	
		printf("enter ten numbers \n");
		for(i=0; i<10; i++)
		{
		scanf("%d", &a[i]);
		sum=sum+a[i];
		}
	for(i=0;i<=9;i++)
		{
			printf("a[%d]= %d \n", i, a[i]);
		}
		printf(" the sum of the integers are: %d", sum);
		return 0;
}
