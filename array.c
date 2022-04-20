#include<stdio.h>
int main()
{
	int a[5], i=0;
		for(i=0; i<=4; i++)
		{
			printf("enter num: ");
			scanf("%d", &a[i]);
		}
		for(i=0;i<=4;i++)
			{
				printf("%d", &a[i]);
			}
			return 0;
}
