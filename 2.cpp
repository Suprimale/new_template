#include<iostream>
using namespace std;
class Hero{
	private:
		int hrs,min,sec;
		public:
			void operator = (int t){
				sec=t%60;
				min=t/60;
				hrs=min/60;
				min=min%60;
			}
			void output(){
				cout<<"hour:"<<hrs<<" minutes:"<<min<<" second:"<<sec;
			}
};
int main(){
	Hero obj;
	int duration;
	cout<<"enter time duration in second: ";
	cin>>duration;
	obj=duration;
	obj.output();
	return 0;
}
