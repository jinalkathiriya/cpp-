#include<iostream>
using namespace std;
class A
{
	int num1,num2,s,m;
	public:
		void person()
		{
			cout<<"enter two numbers: ";
			cin>>num1>>num2;
			s=num1+num2;
			cout<<"adition"<<s<<endl;
		}
		void person(int a, int b)
		{
			m=a*b;
			cout<<"multiplication"<<m<<endl;
		}
};
int main()
{
	A obj;
	obj.person(10,20);
	obj.person();
	
	return 0;
}
