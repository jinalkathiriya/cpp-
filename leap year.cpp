#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter year: ";
	cin>>a;
	if(a%4==0&&a%1==0)
	{
		cout<<"leap year";	
	} 
	else 
	{
		cout<<"not leap year";
	}
	return 0;
}
