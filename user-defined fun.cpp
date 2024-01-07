#include<iostream>
using namespace std;
void fun() //definition
{
	auto int  a=10;
	static int b=20;
	cout<<a<<ends<<b<<endl;
	++a;++b;
}
int main()
{
	fun(); //calling
	fun();
	fun();
	return 0;
}
