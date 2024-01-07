#include<iostream>
using namespace std;
int b=20;
static int d=40;
int main()
{
	int a=10;
	static int c=30;
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
