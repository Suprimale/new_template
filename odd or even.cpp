#include<stdio.h>
int main()
{
	int i=0, a[100], n=0;
	printf("enter the range of array");
	scanf("%d", &n);	
	for(i=0; i<n; i++)
	{
		printf("enter the elements of array");
		scanf(" %d", a[i]);
	}
	printf("even numbers in the array are:");
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			printf("%d", a[i]);
		}
	}
	printf("odd numbers in the array are:");
	for(i=0; i<n; i++)
	{
		if(a[i]%2!=0){
		printf("%d", a[i]);
	}
	
}
return 0;
}
