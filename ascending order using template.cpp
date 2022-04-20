//Wap to do ascending order using template
#include<iostream>
using namespace std;
template<typename t>
void order(t a[],t x){
	t i,j,temp;
	for(int i=0;i<x;i++)
	{
		cout<<"Enter:";
		cin>>a[i];
	}
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=temp;
				a[i]=a[j];
				a[j]=temp;
			}fflush(stdin);
		}
	}
	cout<<"The order are:";
	for(i=0;i<x;i++){
		cout<<a[i]<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter how many numbers you want to enter";
	cin>>n;
	int o[n];
	order<int>(o,n);
	return 0;
}

