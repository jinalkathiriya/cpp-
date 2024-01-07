#include<iostream>
using namespace std;
int a=10; //extern(global)
int main() 
{
	int b=20; //auto(local)
	static int c=30; //static
	register int d=40; //register
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	return 0;
}
