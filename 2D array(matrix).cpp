#include<iostream>
using namespace std;
int main()
{
	int a[2][2],i,j;
	cout<<"Enter 4 array elements: ";
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<" \nmatrix element: \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<ends;
		}
		cout<<endl;
	}
	return 0;
}
