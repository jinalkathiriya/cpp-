#include<iostream>
using namespace std;
int main()
{
	cout<<"Execution starting.."<<endl;
	int a,b,c;
	cout<<"Enter two number: ";
	cin>>a>>b;
	try
	{
		if(b==0)
		throw b;
		c=a/b;
		cout<<"Result: "<<c;
	}
	catch(int x)
	{
		cout<<"Can't devide by "<<x;
	}
	cout<<endl<<"Execution ended..";
	return 0;
}
