#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void input()
		{
			cout<<"enter two number: ";
			cin>>a>>b;
		}
};
class B:public A
{
	int c;
	public:
		void add()
		{
			c=a+b;
			cout<<"addition"<<c;
		}
		void sub()
		{
			c=a-b;
			cout<<"substraction"<<c;
		}
};
class C:public B
{
	int c;
	public:
		void multi()
		{
			c=a*b
			cout<<"multiplication"<<c<<endl;
		}
		void multi()
		{
			c=a/b
			cout<<"division"<<c;
		}
};
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
