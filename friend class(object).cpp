#include<iostream>
using namespace std;
class A
{
	int a,b;
};
class B
{
	int c;
	public:
	void add()
	{
		c=a+b;
		cout<<c;
	} 
};
int main()
{
	B obj;
	obj.add();
	
	return 0;
}
