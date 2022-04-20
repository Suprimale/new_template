#include<iostream>
#include<conio.h>
using namespace std;
class Hero{
	int min,hrs,sec;
	public:
	Hero(int x)
	{
		min=x/60;
		sec=x%60;
		hrs=min/60;
		min=min%60;
	}
	void display()
	{
		cout<<"Hour:"<<hrs<<" Minutes:"<<min<<" Seconds:"<<sec;
	}
};
int main()
{
	int second;
	cout<<"Enter seconds:";
	cin>>second;
	Hero obj1=second;
	obj1.display();
	return 0;
}
