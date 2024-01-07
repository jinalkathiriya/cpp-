#include<iostream>
using namespace std;
int a,b,c;
class A
{
	public:
		void input();
		void add();
};
void A::add()
{
	cout<<"Enter two numbers: ";
	cin>>a>>b;
}
A void::add()
{
	c=a+b;
	cout<<"addition"<<c;
}
class B
{
	public:
		void sub();
};
void B::sub()
{
	c=a-b;
	cout<<"substraction"<<c;
}
class C:public A,public B
{
	void multi();
	void div();
};
void C::multi()
{
	c=a*b;
	cout<<"multiplication"<<c;
}
void C::div()
{
	c=a/b;
	cout<<"division"<<c<<endl;
}
int main()
{
	c obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.multi();
	obj.div();
	
	return 0;
}
