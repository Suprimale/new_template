//wap to where user enter hour and minutes and second and the output is displayed in seconds.
#include<iostream>
using namespace std;
class time{
	private:
		int hrs,min,sec;
		public:
			time(int h,int m,int s){
				hrs=h;
				min=m;
				sec=s;
			}
			operator int (){
				return ((hrs*60*60)+(min*60)+sec);
			}
};
int main(){
	int hr,mi,se,duration;
	cout<<"enter time in hour: ";
	cin>>hr;
	fflush(stdin);
	cout<<"enter time in minutes: ";
	cin>>mi;
	fflush(stdin);
	cout<<"enter time in seconds: ";
	cin>>se;
	fflush(stdin);
	time obj(hr,mi,se);
	duration=obj;
	cout<<"the total time in second is: "<<duration;
	return 0;
}
